# 알고리즘2_0914_Union Find
# 컴퓨터학부 심화컴퓨터전공 2020114658 이윤서

import random
import statistics
import math
import timeit

def root(i):
    while i != ids[i]: i = ids[i]
    return i

def connected(p, q):
    return root(p) == root(q)

def union(p, q):    
    id1, id2 = root(p), root(q)
    if id1 == id2: return
    if size[id1] <= size[id2]: 
        ids[id1] = id2
        size[id2] += size[id1]
    else:
        ids[id2] = id1
        size[id1] += size[id2]

def examine(num, x, n):
    # 0: 상, 1: 하, 2: 좌, 3: 우
    if 0 in num and matrix[x-n] == 1:
        union(x, x-n)
    if 1 in num and matrix[x+n] == 1:
        union(x, x+n)
    if 2 in num and matrix[x-1] == 1:
        union(x, x-1)
    if 3 in num and matrix[x+1] == 1:
        union(x, x+1)
    

def simulate(n, t):
    global ids, size, matrix
    
    ids = []
    size = [] 
    matrix = []
    open_list = []
    
    for i in range (t):
        
        # 전역변수 리스트 초기화
        ids.clear()
        size.clear()
        matrix.clear()
        
        for idx in range(n*n):  
            matrix.append(0)  
            ids.append(idx)
            size.append(1)
        
        # 가상의 두 객체 추가
        ids.append(n*n)
        size.append(1)
        ids.append(n*n+1)
        size.append(1)
        
        for k in range (n):
            # n*n / n*n+1 이 루트가 되도록 union 해야함.
            union(k, n*n)
            union(k + n * (n-1), n*n +1)
            
        while not connected(n*n, n*n+1):
            # 임의의 객체 선택 
            x = random.randint(0, n*n-1)
            
            # 닫힘 상태라면 열림 상태로 바꿈
            if matrix[x] == 0 :
                matrix[x] = 1
                # 인접한 객체가 열림 상태라면 Union
                # 탐색 -> 0: 상, 1: 하, 2: 좌, 3: 우
                
                if n < x < n*(n-1) and x % n != 0 and x % n != n-1: # 상하좌우 다 확인
                    examine([0, 1, 2, 3], x, n)
                elif x == 0:  #우/하 확인
                    examine([1,3], x, n)
                elif x == n-1: #좌/하 확인
                    examine([1,2], x, n)
                elif x == n*(n-1):   #상/우 확인
                    examine([0, 3], x, n)
                elif x == n*n-1:    #상/좌 확인
                    examine([0, 2], x, n)
                elif x % n == 0:    #상/하/우
                    examine([0, 1, 3], x, n)
                elif x < n:     #하/좌/우
                    examine([1, 2, 3], x, n)
                elif x % n == n-1:  #상/하/좌
                    examine([0, 1, 2], x, n)
                else: 
                    #n * (n-1) < x < n*n:  #상/좌/우
                    examine([0, 2, 3], x, n)   
                    
        # 열려있는 객체 비율 구하기
        open = matrix.count(1)
        ratio = open/(n*n)       
        open_list.append(ratio)
        #print("simulation #%d: percolate 할 때 열려 있는 객체의 비율 = %d/%d = %.2f" % (i+1, open, n*n, ratio))
        
    mean = statistics.mean(open_list)
    stdev = statistics.pstdev(open_list)
    
    print("%-25s = %.10f" % ("mean", mean))
    print("%-25s = %.10f" % ("stdev", stdev))
    print("%-25s = [%.10f, %.10f]" % ("95% confidence interval", mean - 1.96 * stdev / math.sqrt(t), mean + 1.96 * stdev / math.sqrt(t)))   
    
    return mean, stdev
    

simulate(200, 100)
simulate(2, 10000)
#print(timeit.timeit(lambda: simulate(200,100), number=1))
#print(timeit.timeit(lambda: simulate(2,10000), number=1))
# 0928_Algorithm
# 2020114658 이윤서



def collinearPoints(points):
    
    # 기울기 저장
    cal_result = []
    
    # 최종 저장
    result = []
    
    # 결과 임시
    temp = []
    
    # 이미 뽑은 직선 제거
    already = {}
    
    # 모든 점에 대해서
    for i in range(len(points)):
        cal_result.clear() # 초기화
        cal_result.append((float('-inf'), points[i][0], points[i][1])) # 기준점 추가

        # 기울기 계산
        for j in range(i+1, len(points)):
            if points[j][0] - points[i][0] == 0:
                slope = float('inf')
            else:
                slope = (points[j][1] - points[i][1]) / (points[j][0] - points[i][0])
            cal_result.append((slope, points[j][0], points[j][1]))
        cal_result.sort()
        
        
        for k in range(len(cal_result) -2):
            if cal_result[k][0] == cal_result[k+2][0]:
                if cal_result[k][0] in already.keys() and (cal_result[k][1], cal_result[k][2]) in already[cal_result[k][0]] : pass
                else:
                    s, e = k, k+2
                    while e < len(cal_result) and cal_result[s][0] == cal_result[e][0]:
                        e += 1
                    e = e - 1
                    temp = []
                    temp.append((cal_result[0][1], cal_result[0][2]))
                    temp.extend([(p[1], p[2]) for p in cal_result[s:e+1]])
                    temp = sorted(temp, key = lambda x: (x[0], x[1]))
                    if already.get(cal_result[e][0]) is None: already[cal_result[e][0]] = temp
                    else: already[cal_result[e][0]] = already.get(cal_result[e][0]) + temp
                    result.append((temp[0][0], temp[0][1], temp[-1][0], temp[-1][1]))
    result.sort()
    return result
    


if __name__ == "__main__":
    print(collinearPoints([(19000,10000), (18000,10000), (32000,10000), (21000,10000), (1234,5678), (14000,10000)]))
    print(collinearPoints([(10000,0), (0,10000), (3000,7000), (7000,3000), (20000,21000), (3000,4000), (14000,15000), (6000,7000)]))
    print(collinearPoints([(0,0), (1,1), (3,3), (4,4), (6,6), (7,7), (9,9)])) 
    print(collinearPoints([(1,0), (2,0), (3,0), (4,0), (5,0), (6,0), (8,0)])) 
    print(collinearPoints([(7,0), (14,0), (22,0), (27,0), (31,0), (42,0)])) 
    print(collinearPoints([(12446,18993), (12798,19345), (12834,19381), (12870,19417), (12906,19453), (12942,19489)])) 
    print(collinearPoints([(1,1), (2,2), (3,3), (4,4), (2,0), (3,-1), (4,-2), (0,1), (-1,1), (-2,1), (-3,1), (2,1), (3,1), (4,1), (5,1)])) 
    print(collinearPoints([(1,1), (2,2), (3,3), (4,4), (0,3), (1,4), (2,5), (3,6), (4,5)]))
    
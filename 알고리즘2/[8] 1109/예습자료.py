

# 사이클 탐지 -> DFS로만

def cycleDetection(g):
    def recur(v):
        visited[v] = True
        verticesInRecurStack.add(v)
        for w in g.adj[v]:
            if w in verticesInRecurStack:
                return True
            if not visited[w]:
                if recur(w): return True
            verticesInRecurStack.remove(v)
            return False
        
    visited = [False for _ in range(g.V)]
    verticesInRecurStack = set()
    for v in range(g.V):
        if not visited[v]:
            if recur(v): return True
    return False
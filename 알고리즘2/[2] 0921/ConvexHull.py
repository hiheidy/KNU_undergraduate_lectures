# Algorithm2 : 2_0921_HW
# 컴퓨터학부 심화컴퓨터 전공
# 2020114658 이윤서

import math

def ccw(i, j, k):
    area2 = (j[0] - i[0]) * (k[1] - i[1]) - (j[1] - i[1]) * (k[0] - i[0])
    if area2 > 0: return True
    else: return False

def grahamScan(points):
    
    # find the start point
    start = points[0]
    p_index = 0
    for i in range(len(points)):
        if points[i][1] < start[1]:
            start = points[i]
            p_index = i
        elif points[i][1] == start[1] and points[i][0] > start[0] :
            start = points[i]
            p_index = i
        
    # Make new Tuple with radians
    cal_points = []
    for i in range(len(points)):
        if i == p_index:
            cal_points.append((points[i][0], points[i][1], -181))
        else :
            angle = math.atan2(points[i][1] - start[1], points[i][0] - start[0])
            cal_points.append((points[i][0], points[i][1], angle))
        
    # Sort
    cal_points = sorted(cal_points, key = lambda cal_points: (cal_points[2], -cal_points[0], cal_points[1]))

    ConvexHull = []
    ConvexHull.extend([cal_points[0], cal_points[1], cal_points[2]])
    for i in range(3, len(cal_points)+1):
        while len(ConvexHull) >= 3 and ccw(ConvexHull[-3], ConvexHull[-2], ConvexHull[-1]) == False:
            del ConvexHull[-2]
        if i != len(cal_points):
            ConvexHull.append(cal_points[i])
        elif not ccw(ConvexHull[-2], ConvexHull[-1], ConvexHull[0]):
            del ConvexHull[-1]
    
    # Make final Tuple List
    result = []
    for p in ConvexHull:
        result.append((p[0], p[1]))
    return result



        
if __name__ == "__main__":        
    print(grahamScan([(0,0),(-2,-1),(-1,1),(1,-1),(3,-1),(-3,-1)]))
    print(grahamScan([(4,2),(3,-1),(2,-2),(1,0),(0,2),(0,-2),(-1,1),(-2,-1),(-2,-3),(- 3,3),(-4,0),(-4,-2),(-4,-4)]))
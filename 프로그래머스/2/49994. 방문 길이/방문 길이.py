def solution(dirs):
    answer = 0
    visited=set() #방문할 경로 기록 set
    
    x,y = 0,0
    
    for i in dirs:
        if i == "U":
            if y==5: continue
            new_x, new_y = x, y+1
        elif i == "D":
            if y==-5: continue
            new_x, new_y = x, y-1
        elif i == "L":
            if x==-5: continue
            new_x, new_y = x-1, y
        elif i == "R":
            if x==+5: continue
            new_x, new_y = x+1, y
        
        # 방문 한 적 없는지 확인
        if (x, y, new_x, new_y) not in visited and (new_x, new_y, x, y) not in visited:
            visited.add((x, y, new_x, new_y))
            visited.add((new_x, new_y, x, y))
            answer+=1
        
        x=new_x
        y=new_y
            
    
    return answer
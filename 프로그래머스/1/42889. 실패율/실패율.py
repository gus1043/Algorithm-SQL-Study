#전체 스테이지의 개수 N, 사용자가 현재 멈춰있는 스테이지의 번호:stages
def solution(N, stages):
    answer = []
    
    #총 도전자 수
    challengers = len(stages)
    
    #딕셔너리로 선언
    dic = {x:0 for x in range(1, N+1)}
    print(dic)
    
    passers = challengers #통과한 사람의 수
    
    #실패율 계산
    for i in range(1, N+1):
        #전체-i보다 작은거/i인 리스트의 개수
        #1단계는 전체 사람수, 2단계는 (전체-1단계) 이므로 passer에서 각 단계별 사람수를 빼나가자
        if stages.count(i)!=0 : 
            print(i, passers, stages.count(i))
            dic[i]= stages.count(i) /passers
            passers-=stages.count(i) 
        
    print("실패율 포함 딕셔너리", dic)
    
    #딕셔너리 value 값으로 정렬
    sorted_dic=sorted(dic.items(), key=lambda x:x[1], reverse=True)
    print("정렬된 dic:", sorted_dic)

    answer = [item[0] for item in sorted_dic]
    print(answer)
    
    #실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는 배열을 return 
    return answer
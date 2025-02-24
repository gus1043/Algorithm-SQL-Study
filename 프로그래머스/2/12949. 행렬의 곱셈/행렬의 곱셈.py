def solution(arr1, arr2):
    answer = [[0] * len(arr2[0]) for _ in range(len(arr1))]
    
    #arr1의 행(hor)이랑 열(ver) 갯수를 알아보자
    hor=len(arr1)
    ver=len(arr2[0])
     
    for i in range(hor): #행 번호 할당
        for j in range(ver): #열 번호 할당
            tmp=0
            #arr1의 행 번호 전체랑 arr2의 열 번호 전체가 곱해지고 더해진다.
            for k in range(len(arr2)):
                # print(arr1[i][k],"*",arr2[k][j])
                tmp+=arr1[i][k]*arr2[k][j]
            answer[i][j]=tmp

    return answer
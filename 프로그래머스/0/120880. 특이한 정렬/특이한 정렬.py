import heapq
def solution(numlist, n):
    answer = []
    
    heap=[]
    for i in range(len(numlist)):
        heapq.heappush(heap, [abs(n-numlist[i]),n-numlist[i], numlist[i]])

    # heap에서 두 번째 값만 출력
    answer =  [heapq.heappop(heap)[2] for _ in range(len(heap))]
    return answer
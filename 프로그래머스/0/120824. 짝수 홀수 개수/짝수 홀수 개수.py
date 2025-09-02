def solution(num_list):
    odd = [num for num in num_list if num%2!=0]
    even = [num for num in num_list if num%2==0]
    answer = [ len(even), len(odd)]
    return answer
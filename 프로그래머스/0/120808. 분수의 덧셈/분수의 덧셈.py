import math 

def solution(numer1, denom1, numer2, denom2):
    answer = []
    
    numer=numer1*denom2 + numer2*denom1
    denom = denom1*denom2
    
    common_divisor = math.gcd(numer, denom)
    
    numer = numer // common_divisor
    denom = denom // common_divisor
    
    result = [numer, denom]
    return result 
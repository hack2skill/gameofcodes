def gcd(a,b):
    if a == 0:
        return b
    return gcd(b % a, a)
 
def lcm(a,b):
    return (a / gcd(a,b))* b
    
t=int(input())
for i in range(t):
    n,a,b,k = map(int, input().split())
    totala = n//a
    totalb = n//b
    lcmab = int(lcm(a,b))
    totallcm = n//lcmab
    total = totala + totalb - 2*totallcm
    if(total>=k):
        print("Win")
    else:
        print("Lose")

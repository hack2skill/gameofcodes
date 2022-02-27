import math
test=int(input())
for _ in range(test):
    N,A,B,K=map(int,input().split())
    cnt1=N//A
    cnt2=N//B
    lcm=((A*B)//math.gcd(A,B))
    toSub=N//lcm
    diff=cnt1+cnt2-(2*toSub)
    if diff>=K:
        print("Win")
    else:
        print("Lose")

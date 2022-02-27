import math
T = int(input())
for i in range(T): 
    n, a, b, k = map(int,input().split())
    if ( n // a + n // b - n // ( a * b // math.gcd(a, b) ) *2 >= k ):
        print( "Win" )
    else:
        print( "Lose" )

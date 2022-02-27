N = int(input())
S = input()
depth = 0
# unclear question so excluding this "You can take the help of Mr Robot anytime you want including 0." case 1 
while (N % 2 == 0):
    mid = N//2
    if (S[0:mid] == S[mid: N]):
        S = S[0:N//2]
        N = mid
        depth += 1
    else:
        break

print(depth)
print(S)

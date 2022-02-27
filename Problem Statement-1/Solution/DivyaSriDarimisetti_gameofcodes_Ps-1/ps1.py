T = int(input())


def is_solvable(question, A, B):
    return (question % A == 0) and (question % B != 0)


for i in range(T):
    N, A, B, K = map(int, input().split())
    res = 0
    for question in range(N):
        if(is_solvable(question, A, B) or is_solvable(question, B, A)):
            res += 1
        if((res == K) or (N-question) < (K-res)):
            break
    if(res == K):
        print("Win")
    else:
        print("Lose")

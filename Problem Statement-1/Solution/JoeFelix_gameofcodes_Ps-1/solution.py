def compute_lcm(x, y):

    # choose the greater number
    if x > y:
        greater = x
    else:
        greater = y

    while True:
        if (greater % x == 0) and (greater % y == 0):
            lcm = greater
            break
        greater += 1

    return lcm


t = int(input())
while t > 0:
    n, a, b, k = input().split()
    x = int(n) // int(a)
    y = int(n) // int(b)
    z = int(n) // compute_lcm(x, y)

    if x + y - 2 * z >= int(k):
        print("Win")
    else:
        print("Loss")

    t -= 1

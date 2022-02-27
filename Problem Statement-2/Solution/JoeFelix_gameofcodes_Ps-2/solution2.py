s = input()
first_half = s[0 : len(s) // 2]
last_half = s[len(s) // 2 :]
depth = 1

while True:
    if first_half == last_half or first_half == last_half[-1]:
        if len(first_half) % 2 == 0:
            first_half = first_half[0 : len(first_half) // 2]
            last_half = last_half[len(first_half) // 2 :]
            depth += 1
        else:
            break

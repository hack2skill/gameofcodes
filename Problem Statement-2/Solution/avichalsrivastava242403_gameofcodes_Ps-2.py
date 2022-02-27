def MrRobot(string):
    n = len(string)
    if (n < 2):
        return string
    start=0
    maxLength=1
    for i in range(n):
        low = i - 1
        high = i + 1
        while (high < n and string[high] == string[i] ):                              
            high=high+1
        while (low >= 0 and string[low] == string[i] ):                
            low=low-1
        while (low >= 0 and high < n and string[low] == string[high]):
          low=low-1
          high=high+1
        length = high - low - 1
        if (maxLength < length):
            maxLength = length
            start=low+1
    return string[start:start + maxLength]
    
inp=input()
ct=0
ans=""
while(1):
    inp=MrRobot(inp)
    if(len(inp)==1):
        ans=str(ct)+" "+inp
        break
    if(len(inp)%2==1):
        inp=inp[:len(inp)-1]
    else:
        inp=inp[:len(inp)//2]
        ct+=1
    
print(ans)
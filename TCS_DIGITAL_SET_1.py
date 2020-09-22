'''
Write a program to find the count of numbers which consists of unique digits.
Input:
Input consist of two Integer lower and upper value of an range
Output:
Output consists of single line, print the count of unique digits in given range. Else
Print"No Unique Number"
Solution:
Input -
10
15

Output
5
'''
def uniqueDigitsHash(num):
    lis = [0]*10
    while(num!=0):
        k = num%10
        if(lis[k]==1):
            return 0
        lis[k] = 1
        num = num//10 # 5434//10 = 543
    return 1
def uniqueDigitsBit(num):
    x = 0
    while(num!=0):
        k = num%10
        y = 1 << k
        if((x&y)!=0):
            return 0
        x = x|y
        num = num//10
    return 1
t = int(input())
ans = [0]*100001
ans[0] = 1
for i in range(1,100001):
    if(uniqueDigitsBit(i)==1):
        ans[i] = ans[i-1] + 1
    else:
        ans[i] = ans[i-1]
for i in range(t):
    start,end = map(int,input().split(" ")) # [100,200]
    print(ans[end]-ans[start-1])



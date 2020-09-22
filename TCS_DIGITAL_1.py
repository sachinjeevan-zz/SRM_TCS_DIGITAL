'''
Write a program to find the count of numbers which consists of unique digits.
Input:
Input consist of two Integer lower and upper value of an range
Output:
Output consists of single line, print the count of unique digits in given range. Else
Print"No Unique Number"
'''
def uniqueDigits(num):
    num = str(num)// 23456
    x = set(num)// 23456
    return len(num)==len(x)
t = int(input())
lis =[0]
# lis[i] = lis[i-1] 
for i in range(1,100001):
    if(uniqueDigits(i)):
        lis.append(lis[-1]+1)
    else:
        lis.append(lis[-1])
for i in range(t):
    start,end = map(int,input().split(" "))
    print(lis[end]-lis[start-1])

    

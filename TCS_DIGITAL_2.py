'''
Number Series with a Twist – 1
Find the 15th term of the series?
0,0,7,6,14,12,21,18, 28
Explanation : In this series the odd term is increment of 7 {0, 7, 14, 21, 28, 35 – – – – – – }
And even term is a increment of 6 {0, 6, 12, 18, 24, 30 – – – – – – }
'''
def arithematicProgression(a1,n,d):
    return a1+(n-1)*d
n = int(input())
if(n%2!=0):
    print(arithematicProgression(0,(n+1)//2,7))
else:
    print(arithematicProgression(0,n//2,6))
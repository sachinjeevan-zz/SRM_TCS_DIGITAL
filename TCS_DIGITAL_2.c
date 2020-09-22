/*
Number Series with a Twist – 1
Find the 15th term of the series?
0,0,7,6,14,12,21,18, 28
Explanation : In this series the odd term is increment of 7 {0, 7, 14, 21, 28, 35 – – – – – – }
And even term is a increment of 6 {0, 6, 12, 18, 24, 30 – – – – – – }
*/
#include<stdio.h>
int arithematicProgression(int a1,int n,int d)
{
    return a1+(n-1)*d;
}
int main()
{
    int N;
    scanf("%d",&N);
    if(N%2!=0)
    {
        printf("%d",arithematicProgression(0,(N+1)/2,7));
    }
    else
    {
        printf("%d",arithematicProgression(0,N/2,6));
    }
}
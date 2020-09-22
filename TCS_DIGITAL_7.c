#include<stdio.h>
int AP(int a1,int n,int d)
{
    return a1+(n-1)*d;
}
int main()
{
    int N;
    scanf("%d",&N);
    if(N%2!=0)
        printf("%d",AP(0,(N+1)/2,7));
    else
        printf("%d",AP(0,N/2,6));
}
/*
Consider the below series:
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…..
This series is a mixture of 2 series fail the odd terms in this series form a Fibonacci series
and all the even terms are the prime numbers in ascending order
Write a program to find the Nth term in this series
The value N in a positive integer that should be read from mm. The Nth term that is
calculated by the program should be written to STDOUT Otherthan the value of Nth term ,
no other characters / string or message should be written to STDOUT.
For example, when N:14, the 14th term in the series is 17 So only the value 17 should be
printed to STDOUT
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* SOE(int arr[],int N)
{
    arr[0]=arr[1] = 0;
    for(int i=2;i<=N;i++)
    {
        arr[i] = 1;
    }
    // Selection
    for(int i=2;i*i<=N;i++)
    {
        if(arr[i]==1)
        {
            // elimination
            for(int j =i*i;j<=N;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    int *ans = (int*)malloc(sizeof(int)*N);
    for(int i=0,j=0;i<=N;i++)
    {
        if(arr[i]!=0)
        {
            ans[j] = i;
            j++;
        }

    }
    return ans;
    
}
int fib(int num)
{
    return ceil((pow((1.0 + sqrt(5))/2.0,num) - pow((1.0 - sqrt(5))/2.0,num))/sqrt(5));
}
int main()
{
    int N;
    scanf("%d",&N);
    int arr[100001];
    int* ans = SOE(arr,100000);
    if(N%2!=0)
        printf("%d",fib((N+1)/2));
    else
        printf("%d",ans[N/2-1]);

    

}
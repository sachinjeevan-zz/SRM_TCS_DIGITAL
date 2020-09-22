/*
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
*/
#include<stdio.h>
int uniqueDigitsHash(int num) // 6 times
{
    int hash[10] = {0};
    while(num!=0)
    {
        int k = num%10;
        if(hash[k]==1)
            return 0;
        hash[k]=1;
        num = num/10;
    }
    return 1;
}
int uniqueDigitsBit(int num)
{
    short int x=0,y,k;
    while(num!=0)
    {
        k = num%10;
        y = 1 << k;
        if((x&y)!=0)
            return 0;
        x = x | y;
        num = num/10;
    }
    return 1;
}
int main()
{
    int t,start,end;
    scanf("%d",&t);
    int arr[100001];
    arr[0] = 1;
    for(int i=1;i<=100000;i++) // 10^5 * 6
    {
        if(uniqueDigitsBit(i)==1)
        {
            arr[i] = arr[i-1]+1;
        }
        else
        {
            arr[i] = arr[i-1];
        }
        
    }
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&start,&end);
        printf("%d\n",arr[end] - arr[start-1]);
    }
}
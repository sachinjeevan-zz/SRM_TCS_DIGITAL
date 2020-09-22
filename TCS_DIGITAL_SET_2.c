/*
There is a range given n and m in which we have to find the count all the prime pairs
whose difference is 6. We have to find how many sets are there within a given range.
Output:
Output consists of single line, print the count prime pairs in given range. Else print"No
Prime Pairs".
Constraints:
2<=n<=1000
n<=m<=2000
Sample Input:
4
30
Output:
6
Explanation:
(5, 11) (7, 13) (11, 17) (13, 19) (17, 23) (23, 29) . we have 6 prime pairs.
Solution:
Input -
101
500
*/
#include<stdio.h>
void SOE(int arr[],int n)
{
    for(int i=0;i<=n;i++)
        arr[i] = i;
    arr[1]=0;
    for(int i=2;arr[i]*arr[i]<=n;i++)
    {
        if(arr[i]!=0)
        {
            for(int j= arr[i]*arr[i];j<=n;j=j+arr[i])
            {
                arr[j] = 0;
            }
        }
    }
}
int primePair(int arr[],int start,int end)
{
    int count =0 ;
    for(int i=start;i+6<=end;i++)
    {
        if(arr[i]!=0 && arr[i+6]!=0)
        {
            printf("(%d,%d) ",arr[i],arr[i+6]);
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[100000+1];
    SOE(arr,100001);
    int t,start,end;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&start,&end);
        printf("\n%d",primePair(arr,start,end));
        printf("\n");
    }
    
}

// Array can be passed with address 
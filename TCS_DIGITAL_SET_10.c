#include<stdio.h>
void printLIS(int arr[],int LIS[],int max,int ind)
{
    if(max>0)
    {
        if(LIS[ind]==max)
        {
            printLIS(arr,LIS,max-1,ind-1);
            printf("%d ",arr[ind]);
        }
        else
        {
            printLIS(arr,LIS,max,ind-1);
        }
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],LIS[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        LIS[i] = 1;
    }
    int i=0,j=1,max=1,ind=0;
    while(j<n)
    {
        i=0;
        while(i<j)
        {
            if(arr[j]>=arr[i])
            {
                if(LIS[i]+1>LIS[j])
                {
                    LIS[j] = LIS[i]+1;
                    if(LIS[j]>max)
                    {
                        max = LIS[j];
                        ind = j;
                    }
                }
            }
            i++;
        }
        j++;
    }
    printLIS(arr,LIS,max,ind);
   
}
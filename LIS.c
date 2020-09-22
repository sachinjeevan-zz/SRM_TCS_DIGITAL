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
    int N;
    scanf("%d",&N);
    int arr[N],LIS[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        LIS[i] = 1;
    }
    int i=1,j=0,max=1,ind=0;
    while(i<N)
    {
        j=0;
        while(j<i)
        {
            if(arr[i]>=arr[j])
            {
                if(LIS[j]+1>LIS[i])
                {
                    LIS[i] = LIS[j]+1;
                    if(LIS[i]>max)
                    {
                        max = LIS[i];
                        ind = i;
                    }
                }
            }
            j++;
        }
        i++;
    }
    printLIS(arr,LIS,max,ind);

}
#include <stdio.h>
int max_subarray_sum(int arr[],int n,int k)
{
    int sum = 0;
    int max = 0;
    for(int i = 0; i<k;i++)
    {
        sum+=arr[i];
    }
    max = sum;
    for(int i = 1; i<=n-k;i++)
    {
    	sum = 0;
        for(int j = i;j<k+i;j++)
        {
        sum += arr[j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}
int main(void)
{
    int arr[] = {100,200,300,400};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The maximum sum of a subarray of size %d in the given array is: %d", k, max_subarray_sum(arr,n,k));
}

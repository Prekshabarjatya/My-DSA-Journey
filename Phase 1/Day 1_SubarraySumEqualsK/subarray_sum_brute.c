#include <stdio.h>
int subarraySum(int arr[], int n, int key)
{
	int prefix_sum = 0; 
	int count = 0;
	for(int i = 0; i<n;i++)
	{
		prefix_sum = 0;
		for(int j = i; j<n;j++)
		{
			prefix_sum+=arr[j];
			if(prefix_sum == key)
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int arr[] = {1,2,3};
	int key = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("There are %d subarrays whose sum equals %d.", subarraySum(arr,n,key),key);
	return 0;
}

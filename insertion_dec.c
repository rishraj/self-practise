#include <stdio.h>


int main()
{
	int n , i ,key;
	scanf("%d",&n);
	int arr[n];
	for(int x=0 ; x<n ; x++)
		scanf("%d",&arr[x]);
	for(int j=1 ; j<n ; j++)
	{
		key = arr[j];
		i = j-1;
		while(i>=0 && arr[i]<key)
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
	for (int z = 0; z < n; z++)
	{
		printf("%d ", arr[z]);
	}
	printf("\n");
}
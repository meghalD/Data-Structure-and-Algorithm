#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the sorted array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
				swap(a[j+1],a[j]);
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

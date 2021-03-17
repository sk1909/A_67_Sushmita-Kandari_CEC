#include<stdio.h>
void inversion(int arr[],int n)
{
	int i,j,in=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
				in++;
		}
	}
	printf("%d",in);
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	inversion(arr,n);
}


#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void randomisation(int arr[],int l,int h)
{
	int n=h-l+1;
	int temp=rand()%n;
	swap(&arr[l+temp],&arr[h]);
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1,j;
	for(j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void quickSort(int arr[],int low,int high)
{
	 if(low<high)
	 {
	 	randomisation(arr,low,high);
	 	int p=partition(arr,low,high);
	 	quickSort(arr,low,p-1);
	 	quickSort(arr,p+1,high);
	 }
}
void median(int arr[],int n)
{
	int i;
	if(n%2==1)
		printf("%d",arr[n/2]);
	else
	{
		float s=(arr[n/2]+arr[n/2-1])/2.0;
		printf("%f",s);
	}
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
	quickSort(arr,0,n-1);
	median(arr,n);
}


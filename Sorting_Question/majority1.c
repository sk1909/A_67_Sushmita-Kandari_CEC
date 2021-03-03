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
void Majority(int arr[],int low,int high)
{
	 if(low<high)
	 {
	 	randomisation(arr,low,high);
	 	int p=partition(arr,low,high);
	 	Majority(arr,low,p-1);
	 	Majority(arr,p+1,high);
	 }
}
void display(int arr[],int n)
{
	int i,c=1;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
			c++;
		else
			c=1;
		if(c>n/2)
		{
			printf("Majority element is present which is %d",arr[i]);
			return;
		}
	}
	printf("No Majority element");
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
	Majority(arr,0,n-1);
	display(arr,n);
}



#include<stdio.h>
void merge(int arr[],int l,int m,int r)
{
	int n1=m-l+1, n2=r-m;
	int a[n1],b[n2],i=0,j=0,k=0;
	while(i<n1)
	{
		a[i]=arr[l+i];
		i++;
	}
	while(j<n2)
	{
		b[j]=arr[m+1+j];
		j++;
	}
	i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(a[i]<=b[j])
			arr[k++]=a[i++];
		else
			arr[k++]=b[j++];
	}
	while(i<n1)
	{
		arr[k++]=a[i++];
	}
	while(j<n2)
	{
		arr[k++]=b[j++];
	}
}
void mergeSort(int arr[],int l,int r)
{
	 if(l<r)
	 {
	 	int m=l+(r-l)/2;
	 	mergeSort(arr,l,m);
	 	mergeSort(arr,m+1,r);
	 	merge(arr,l,m,r);
	 }
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
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
	mergeSort(arr,0,n-1);
	display(arr,n);
}


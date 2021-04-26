#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
/*void randomisation(int arr[],int l,int h)
{
	int n=h-l+1;
	int temp=rand()%n;
	swap(&arr[l+temp],&arr[h]);
}*/
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
int quickSort(int arr[],int low,int high,int k)
{
	 if(low<=high)
	 {
	 //	randomisation(arr,low,high);
	 	int p=partition(arr,low,high);
	 	if(p==k)
	 	{
	 		return p;	
		}
	 	if(p<k)
	 	{
	 		return quickSort(arr,p+1,high,k);
		}
		else
		{
			return quickSort(arr,low,p-1,k);
		}
	 }
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	float med=0.0;
	if(n&1)
	{
		int m=quickSort(arr,0,n-1,n/2);
		med=0.0+arr[m];
	}
	else
	{
		int m1=quickSort(arr,0,n-1,n/2-1);
		int m2=quickSort(arr,0,n-1,n/2);
		med=(arr[m1]+arr[m2])/2.0;
	}
	cout<<med<<endl;
}





#include<iostream>
#include<unordered_map>
using namespace std;
void majority(int arr[],int n)
{
	unordered_map<int,int>u;
	int i;
	for(i=0;i<n;i++)
	{
		u[arr[i]]++;
	}
	for(auto a:u)
	{
		if(a.second>n/2)
		{
			cout<<"Majority element is present which is "<<a.first;
			return;
		}
	}
	cout<<"No majority element";
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
	majority(arr,n);
}

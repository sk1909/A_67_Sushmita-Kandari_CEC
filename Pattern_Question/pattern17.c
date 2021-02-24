/* 
       1
      123
     12345
      123
       1
*/

#include<stdio.h>
int main()
{
	int n,i,j,sp;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(sp=i;sp<n-1;sp++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(sp=1;sp<n-i;sp++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
	
}



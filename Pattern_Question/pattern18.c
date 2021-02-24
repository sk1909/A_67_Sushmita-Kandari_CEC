/* 
       1
      121
     12321
      121
       1
*/

#include<stdio.h>
#include<stdio.h>
int main()
{
	int n,i,j,sp;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(sp=0;sp<n-i-1;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i+1;j++)
		{
			printf("%d",j);
		}
		for(j=i;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");	
	}
	for(i=0;i<n-1;i++)
	{
		for(sp=i;sp>=0;sp--)
		{
			printf(" ");
		}
		for(j=1;j<n-i;j++)
		{
			printf("%d",j);
		}
		for(j=0;j<n-i-2;j++)
		{
			printf("%d",n-i-j-2);
		}
		printf("\n");
	}
}


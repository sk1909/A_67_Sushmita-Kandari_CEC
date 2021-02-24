/* 

	123454321
	 1234321
	  12321
	   121
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
		for(sp=0;sp<i;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i;j++)
		{
			printf("%d",j);
		}
		for(j=0;j<n-i-1;j++)
		{
			printf("%d",n-j-i-1);
		}
		printf("\n");
	}
}



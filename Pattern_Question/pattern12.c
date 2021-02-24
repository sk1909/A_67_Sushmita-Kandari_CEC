/* 

    1
   121
  12321
 1234321
123454321

*/

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
}



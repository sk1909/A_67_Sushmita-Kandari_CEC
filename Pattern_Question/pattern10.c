/* 

    1
   2 1
  3 2 1
 4 3 2 1
5 4 3 2 1

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
		for(j=i+1;j>0;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}


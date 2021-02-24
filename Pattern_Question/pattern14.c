/* 

    5 4 3 2 1
     4 3 2 1
      3 2 1
       2 1
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
		for(j=0;j<n-i;j++)
		{
			printf("%d ",n-j-i);
		}
		printf("\n");
	}
}


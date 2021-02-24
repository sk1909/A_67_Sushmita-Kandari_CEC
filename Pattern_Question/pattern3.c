/* 

    *
   **
  ***
 ****
*****

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
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

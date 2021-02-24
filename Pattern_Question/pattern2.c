/* 

1
12
123
1234
12345

*/


#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
}

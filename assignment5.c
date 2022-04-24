#include<stdio.h>
int main()
{
	int i;
	int j;
	int n;
	int a;
	printf("Number of rows: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
   {
	for(j=1;j<=i;j++)
	printf("%d\t" ,a++);
	printf("\n");
   }
	
	return 0;
}

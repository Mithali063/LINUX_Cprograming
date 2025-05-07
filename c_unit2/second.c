//enhance the above program to print not just one number, but 10 numbers given in the file//
#include<stdio.h>
int main()
{
	int i, a[10];
	printf("given ten numbers are\n");
	for(i = 0; i<10; i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
}

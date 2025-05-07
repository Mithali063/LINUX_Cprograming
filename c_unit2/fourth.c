/*program to count number of characters on screen*/
#include<stdio.h>
int main()
{
	FILE *fp = NULL;
	char ch;
	int count = 0;
	fp = fopen("input3.txt","r");
	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c",ch);
		count++;
	}
	printf("number of character in file = %d\n",count);

}

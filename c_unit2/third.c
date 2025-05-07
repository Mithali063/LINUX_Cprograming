/*write program to read input character by character from stdin and print it on the stdout*/
#include<stdio.h>
int main()
{
	FILE*fp = NULL;
		char ch;
	fp = fopen("input3.txt","r");
	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}

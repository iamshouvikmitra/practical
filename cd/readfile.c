#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;

	fp=fopen("abc.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF) //END OF FILE
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
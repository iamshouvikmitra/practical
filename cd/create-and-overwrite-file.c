#include<stdio.h>
void main(){
	FILE *fp;
	int i;
	char a[]="This is CSE-BDA\n";
	fp=fopen("abc.txt","w");
	for(i=0;a[i]!='\0';i++)
		fputc(a[i],fp);
	fputs("Complier Lab",fp);
	fclose(fp);
	getch();
}
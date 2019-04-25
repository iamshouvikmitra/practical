#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	fp=fopen("rep.txt","w");
	fseek(fp,40,SEEK_SET);	
	fputs("Compiler Lab",fp);
	getch();
}
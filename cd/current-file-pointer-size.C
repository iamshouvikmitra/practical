#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	long int size;
	FILE *fp;
	size=ftell(fp);
	fp=fopen("ABCD.txt","r");
	printf("Content of the file is as follows: \n");
	ch=fgetc(fp);
	while(ch!=EOF){
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fseek(fp,0,SEEK_END);
	printf("\n\nSize of file is %ld",ftell(fp));
	getch();
}

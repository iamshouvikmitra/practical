#include<stdio.h>
#include<string.h>
int checkKey(char[]);
void main(){
	FILE *fread;
	char c,ch[100],*token,delimit[]=" \n\t)(";
	fread=fopen("add.txt","r");
	clrscr();
	printf("After scaning add.txt file we get the following keywords:\n");
	while(!feof(fread)){
		fgets(ch,100,fread);
		token=strtok(ch,delimit);
		while(token!=NULL){
			if(checkKey(token))
				printf("%s \n",token);
			token=strtok(NULL,delimit);
		}
	}
	fclose(fread);
	getch();
}
int checkKey(char ch[]){
	if(!strcmp(ch,"auto") || !strcmp(ch,"break") || !strcmp(ch,"case") || !strcmp(ch,"char") || !strcmp(ch,"const") || !strcmp(ch,"continue") || !strcmp(ch,"default") || !strcmp(ch,"do") || !strcmp(ch,"double") || !strcmp(ch,"else") || !strcmp(ch,"enum") || !strcmp(ch,"extern") || !strcmp(ch,"float") || !strcmp(ch,"for") || !strcmp(ch,"goto") || !strcmp(ch,"if") || !strcmp(ch,"int") || !strcmp(ch,"long") || !strcmp(ch,"register") || !strcmp(ch,"return") || !strcmp(ch,"struct") || !strcmp(ch,"switch") || !strcmp(ch,"typedef") || !strcmp(ch,"union") || !strcmp(ch,"unsigned") || !strcmp(ch,"void") || !strcmp(ch,"volatile") || !strcmp(ch,"while") || !strcmp(ch,"auto") || !strcmp(ch,"short") || !strcmp(ch,"signed") || !strcmp(ch,"short") || !strcmp(ch,"sizeof") || !strcmp(ch,"static"))
			return 1;
	return 0;
}
#include<stdio.h>
#include<string.h>
int checkKey(char[]);
int checkId(char[]);
int main(){
	FILE *fread;
	char c,ch[100],*token,delimit[]=" \n\t)(,;";
	fread=fopen("identify.txt","r");
	printf("After scanning identify.txt file we get the following keywords:\n");
	while(!feof(fread)){
		fgets(ch,100,fread);
		token=strtok(ch,delimit);
		while(token!=NULL){
			if(!checkKey(token) && checkId(token))
				printf("%s \n",token);
			token=strtok(NULL,delimit);
		}
	}
	fclose(fread);
}
int checkKey(char ch[]){
	if(!strcmp(ch,"printf") || !strcmp(ch,"main") || !strcmp(ch,"auto") || !strcmp(ch,"break") || !strcmp(ch,"case") || !strcmp(ch,"char") || !strcmp(ch,"const") || !strcmp(ch,"continue") || !strcmp(ch,"default") || !strcmp(ch,"do") || !strcmp(ch,"double") || !strcmp(ch,"else") || !strcmp(ch,"enum") || !strcmp(ch,"extern") || !strcmp(ch,"float") || !strcmp(ch,"for") || !strcmp(ch,"goto") || !strcmp(ch,"if") || !strcmp(ch,"int") || !strcmp(ch,"long") || !strcmp(ch,"register") || !strcmp(ch,"return") || !strcmp(ch,"struct") || !strcmp(ch,"switch") || !strcmp(ch,"typedef") || !strcmp(ch,"union") || !strcmp(ch,"unsigned") || !strcmp(ch,"void") || !strcmp(ch,"volatile") || !strcmp(ch,"while") || !strcmp(ch,"auto") || !strcmp(ch,"short") || !strcmp(ch,"signed") || !strcmp(ch,"short") || !strcmp(ch,"sizeof") || !strcmp(ch,"static"))
			return 1;
	return 0;
}
int checkId(char ch[]){
    int i;
    if(((int)ch[0]>=65 && (int)ch[0]<=90) || ((int)ch[0]>=97 && (int)ch[0]<=122) || ch[0]=='_'){
        for(i=1;i<strlen(ch);i++)
            if(((int)ch[i]>=65 && (int)ch[i]<=90) || ((int)ch[i]>=97 && (int)ch[i]<=122) || ((int)ch[i]>=48 && (int)ch[i]<=57) || ch[0]=='_')
                continue;
            else
                return 0;
        return 1;
    }
    else
        return 0;
}

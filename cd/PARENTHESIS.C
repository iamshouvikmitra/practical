#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char par[100], stack[100];
	int fetch, top=-1;
	printf("Enter your string of parenthesis: ");
	scanf("%s",par);
	for(fetch=0;fetch<strlen(par);fetch++)
		if(par[fetch]==40)
			stack[top++]='(';
		else
			if(par[fetch]==41 && top!=-1)
				stack[top--];
			else
				break;
	if(top==-1)
		printf("The entered string is a valid set of parenthesis!" );
	else
		printf("You have entered invalid input!");
	getch();
	return 0;
}

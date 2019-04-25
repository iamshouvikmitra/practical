#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[100];
	int ch_, ch, plus=0, minus=0, multiply=0, divide=0, mod=0;
	printf("Enter your string:");
	scanf("%s",&s);
	for(ch_=0;ch_<strlen(s);ch_++)
	{
		ch=s[ch_];
		if(ch==43)
			plus++;
		else
			if(ch==45)
				minus++;
			else
				if(ch==35)
					multiply++;
				else
					if(ch==47)
						divide++;
					else
						if(ch==37)
							mod++;
	}
	if(plus)
		printf("+ operator occurs %d times. \n",plus);
	if(minus)
		printf("- operator occurs %d times. \n",minus);
	if(multiply)
		printf("* operator occurs %d times. \n",multiply);
	if(divide)
		printf("/ operator occurs %d times. \n",divide);
	if(mod)
		printf("%% operator occurs %d times. \n",mod);
	if(!plus && !minus && !multiply && !divide && !mod)
		printf("No arithmetic operator found!");

getch();
}
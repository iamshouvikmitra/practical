#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
	int gd=DETECT, gm, x1, x2, y1, y2, steps, dx, dy;
	float xin, yin;
	initgraph(&gd, &gm, "C://TC//BGI");
	
	printf("Enter x1 y1 x2 y2 : ");
	scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
	dx = x2-x1;
	dy = y2-y1;
	if(abs(x2-x1)>abs(y2-y1)){
		steps = abs(x2-x1);
	}
	else{
		steps = abs(y2-y1);
	}
	xin = dx/steps;
	yin = dy/steps;
	
	for(i = 1; i<steps; i++){
		putpixel(x1,y1,WHITE);
		x1 = x1 + xin;
		y1 = y1 + yin;
	}
	closegraph();
	return ;
}
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void drawLine(int x1,int y1,int x2,int y2)
{
	int dx, dy, p, x, y;
	dx = x2-x1;
	dy = y2-y1;
	x = x1;
	y = y1;
	
	p = 2*dy-dx;
	while(x<x2){
		if(p>=0){
			putpixel(x, y, WHITE);
			y = y+1;
			p = p + 2 * dy - 2 * dx;
		}
		else{
			putpixel(x, y, WHITE);
			p = p + 2 * dy;
		}
		x = x+1;
	}
}

void main()
{
	int gd=DETECT, gm, x1, x2, y1, y2, steps, dx, dy;
	float xin, yin;
	initgraph(&gd, &gm, "C://TC//BGI");
	
	printf("Enter x1 y1 x2 y2 : ");
	scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
	
	drawLine(x1,y1, x2, y2);
	closegraph();
	return ;
}
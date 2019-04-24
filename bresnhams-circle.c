#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void drawCircle(int xc,int yc,int x,int y)
{
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc-x, yc-y, WHITE);
	putpixel(xc+y, yc+x, WHITE);
	putpixel(xc+y, yc-x, WHITE);
	putpixel(xc-y, yc+x, WHITE);
	putpixel(xc-y, yc-x, WHITE);
}

void circleBres(int xc, int yc, int r)
{
	int x =0; y=r;
	int d = 3-2*r;
	drawCircle(xc, yx, x, y);
	while(y>=x){
		x++;
		if(d>0){
			y--;
			d = d + 4 * (x -y)+10;
		}
		else{
			d = d + 4 * x + 6;
		}
		drawCircle(xc, yc, x, y);
	}
}

void main()
{
	int gd=DETECT, gm, xc = 50, yc = 50, r =30;
	initgraph(&gd, &gm, "C://TC//BGI");
	
	circleBres(xc, yc, r);
	getch();
	closegraph();
	return ;
}
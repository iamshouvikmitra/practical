#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TC//BGI");
	putpixel(50,50,WHITE);
	closegraph();
	return;
}
#include<conio.h>
#include<graphics.h>
void flood(int x, int y, int new_col, int old_col){
	delay(1);
	if(getpixel(x, y) == old_col) {
		putpixel(x, y, new_col);
		flood(x + 1, y, new_col, old_col);
		flood(x - 1, y, new_col, old_col);
		flood(x, y + 1, new_col, old_col);
		flood(x, y - 1, new_col, old_col);
	}
}
int main(){
	int x = 51;
	int y = 51;
	int newcolor = 12;
	int oldcolor = 0;
	int gd=DETECT,gm;
	int top, left, bottom, right;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	top = left = 50;
	bottom = right = 100;
	rectangle(left, top, right, bottom);
	flood(x, y, newcolor, oldcolor);
	getch();
	closegraph();
	return 0;
}

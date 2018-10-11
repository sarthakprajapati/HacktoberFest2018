#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>
#include <conio.h>

void main( )
{
    float x,y,x1,y1,x2,y2,dx,dy,step;
    int i,gd=DETECT,gm;

    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

    printf("Enter the value of x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f%f",&x2,&y2);

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy)
	step=dx;
    else
	step=dy;

    dx=dx/step;
    dy=dy/step;

    x=x1;
    y=y1;

    clrscr();
    for(int j=0;j<step;j++)
    {
	putpixel(floor(x),floor(y),5);
	x=x+dx;
	y=y+dy;
	delay(100);
    }
    closegraph();
}
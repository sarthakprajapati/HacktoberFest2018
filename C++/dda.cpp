#include<iostream>
#include<stdlib.h> //for abs function
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    int x0,y0,x1,y1;
    cout<<"Enter the coordinates of one end of the line(x0,y0)";
    cin>>x0>>y0;
    cout<<"Enter the coordinates of second end of the line(x1,y1)";
    cin>>x1>>y1;
    int dx,dy;
    dx = x1-x0;
    dy = y1-y0;

    int steps;
    if(abs(dx)>abs(dy))
    {
        steps = abs(dx);
    }
    else
        steps = abs(dy);

    float xincr,yincr;
    xincr = dx/(float)steps;
    yincr = dy/(float)steps;

    float x = x0;
    float y = y0;
    for(int i=0;i<steps;i++)
    {
        putpixel(x,y,RED);
        x = x + xincr;
        y = y + yincr;
        delay(100);

    }
    getch();
    closegraph();
    return 0;
}

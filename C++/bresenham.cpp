#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    int x0,y0,x1,y1;
    cout<<"Enter the one end point (x0,y0) of the line";
    cin>>x0>>y0;
    cout<<"Enter the second end point (x1,y1) of the line";
    cin>>x1>>y1;
    int dx,dy;
    dx = x1-x0;
    dy = y1-y0;
    int p[dx] = {};
     p[0] = 2*dy-dx;

    int x = x0;
    int y = y0;
    for(int k=0;k<dx;k++)
    {
        if(p[k]<0)
        {
            putpixel(x,y,RED);
            p[k+1] = p[k] + 2*dy;
            x = x+1;
            y = y;
        }
        else
        {
            putpixel(x,y,RED);
            p[k+1] = p[k] + 2*dy - 2*dx;
            x = x + 1;
            y = y + 1;
        }
    }

    getch();
    closegraph();
    return 0;
}

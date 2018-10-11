#include <iostream>
using namespace std;
#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT , gm;
    initgraph(&gd, &gm,"");
    int xc,yc;
    cout<<"Enter the center coordinates of circle"<<endl;
    cin>>xc>>yc;
    int r;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    int x = 0;
    int y = r;
    int p = 1-r; //initial decision parameter
    while(x<y)
    {
        if(p<0)
        {
            x = x + 1;
            p = p + 2*x +1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2*x - 2*y + 1;
        }
        putpixel(xc+x,yc+y,RED);
        putpixel(xc+y,yc+x,RED);
        putpixel(xc+x,yc-y,RED);
        putpixel(xc-y,yc+x,RED);
        putpixel(xc-x,yc-y,RED);
        putpixel(xc-y,yc-x,RED);
        putpixel(xc-x,yc+y,RED);
        putpixel(xc+y,yc-x,RED);
        delay(100);
    }
    getch();
    closegraph();
}

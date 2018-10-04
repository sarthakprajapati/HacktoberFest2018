 #include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    float a,b;
    float xc,yc;
    cout<<"Enter the center of ellipse";
    cin>>xc>>yc;
    cout<<"Enter the length of half of semi-major and semi-minor axis of ellipse centered at (0,0)"<<endl;
    cin>>a>>b;
    float x = 0;
    float y = b;
    float p1 = (b*b)+((a*a)/4)-(a*a*b) ;
   while((2.0*b*b*x)<=(2.0*a*a*y))
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
       delay(100);

        x = x+1;
        if(p1<=0)
        {
            y = y;
            p1 = p1 + (2*b*b*x) + (b*b);
        }
        else
        {
            y = y-1;
            p1 = p1 + (2*b*b*x) - (2*a*a*y) + (b*b);
        }

    }
      float p2 = (a*a)+((b*b)/4)-(b*b*a) ;
      x = a;
      y = 0;
    while((2.0*b*b*x)>=(2.0*a*a*y))
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        delay(100);

        y = y+1;
        if(p2>0)
        {
            x = x;
            p2 = p2 - (2*a*a*y) + (a*a);
        }
        else
        {
            x = x-1;
            p2 = p2 - (2*a*a*y) + (2*b*b*x) + (a*a);
        }
    }
    getch();
    closegraph();

}


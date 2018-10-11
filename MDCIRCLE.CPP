#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
    putpixel(x0 + x, y0 + y, 5);
    delay(50);
    putpixel(x0 + y, y0 + x, 5);
    delay(50);
    putpixel(x0 - y, y0 + x, 5);
    delay(50);
    putpixel(x0 - x, y0 + y, 5);
    delay(50);
    putpixel(x0 - x, y0 - y, 5);
    delay(50);
    putpixel(x0 - y, y0 - x, 5);
    delay(50);
    putpixel(x0 + y, y0 - x, 5);
    delay(50);
    putpixel(x0 + x, y0 - y, 5);
    delay(50);

    if (err <= 0)
    {
	y += 1;
	err += 2*y + 1;
    }

    if (err > 0)
    {
	x -= 1;
	err -= 2*x + 1;
    }
    }
}

int main()
{
    int gdriver=DETECT, gmode, error, x, y, r;
    initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
    printf("Enter radius of circle: ");
    scanf("%d", &r);

    printf("Enter co-ordinates of center(x and y): ");
    scanf("%d%d", &x, &y);
    drawcircle(x, y, r);
    getch();
    return 0;
}
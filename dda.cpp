#include<graphics.h>
#include <cmath>
int main()
{
    float xn,yn,x_start,y_start,x_end,y_end;
    x_start=100;
    y_start=200;
    x_end=500;
    y_end=300;

    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    putpixel(x_start,y_start,WHITE);
    float m = (y_end-y_start)/(x_end-x_start);
    float x = x_start;
    float y = y_start;
    while(x!=x_end && y!=y_end)
    {
        if(m<=1)
        {
            xn= x+1;
            yn= y+m;
        }
        else
        {
            xn= x+(1/m);
            yn= y+1;
        }
        putpixel(round(xn),round(yn),WHITE);
        x=xn;
        y=yn;
    }
    getch();
    closegraph();
}

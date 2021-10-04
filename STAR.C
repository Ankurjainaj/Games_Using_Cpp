
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\bgi");
line(150,100,100,200);
line(100,200,200,200);
line(200,200,150,100);
line(100,125,200,125);
line(100,125,150,225);
line(150,225,200,125);
getch();
closegraph();
}
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
int gd=DETECT,gm,i,x,y;
char timer[4];
initgraph(&gd,&gm,"c:\\TC\\bgi");
x=getmaxx();
y=getmaxy();
for(i=6;i>=0;i--){
sprintf(timer,"%d",i);
setcolor(RED);
settextstyle(1,0,10);
outtextxy(260,130,timer);
delay(1000);
cleardevice();
}
setcolor(GREEN);
settextstyle(2,0,10);
outtextxy(100,180,"Your time is up!!!!!");
getch();
closegraph();
return 0;
}
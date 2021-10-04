
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm,errorcode,col,x,y,i,k;
char str[20];
initgraph(&gd,&gm,"c:\\TC\\bgi");
errorcode=graphresult();
if(errorcode!=grOk)
{
printf("Graphics error:%s\n",grapherrormsg(errorcode));
printf("Press any key to halt:");
getch();
exit(1);
}
//setbkcolor(RED);
  setcolor(BLUE);
//bar3d(100,100,100+60,100+50,30,1);
//ellipse(200,200,10,350,70,50);
//col=getpixel(200,200);
//sprintf(str,"color is %d",col);
//outtextxy(250,250,str);
//moveto(300,300);
//lineto(350,300);
//line(300,300,400,250);

//for(i=0;i<100;i++){
// setcolor(i);
//  x=getmaxx();
//  y=getmaxy();
// circle(x/2,y/2,20+k);
// k=k+5;
//   delay(100);
//}
//setfillstyle(SOLID_FILL,YELLOW);
/*for(i=0;i<4;i++){
setlinestyle(i,4,3);
line(200,200+k,400,200+k);
printf("\n");
k=k+20;
} */                        //-------rainbow---------//
/*for(i=0;i<=7;i++){
 setcolor(i);
 ellipse(x/2,y/2+k,30,150,100,20);
 k=k+5;

} */
 i=0;
 for(k=0;k<40;k++){
 fillellipse(20,10+i,20,10);
 fillellipse(70,10+i,20,10);
 fillellipse(120,10+i,20,10);
 fillellipse(170,10+i,20,10);
 fillellipse(220,10+i,20,10);
 fillellipse(270,10+i,20,10);
 fillellipse(320,10+i,20,10);
 fillellipse(370,10+i,20,10);
 fillellipse(420,10+i,20,10);
 fillellipse(470,10+i,20,10);
 fillellipse(520,10+i,20,10);
 fillellipse(570,10+i,20,10);
 i=i+30;
 delay(500);
// cleardevice();
 }


getch();
closegraph();
}
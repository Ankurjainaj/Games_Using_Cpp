
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle=360-135, endangle=360-45;
   int radius = 100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C://TC//BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
	  printf("Graphics error: %s\n", grapherrormsg(errorcode));
	  printf("Press any key to halt:");
	  getch();
	  exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   circle(midx, midy, radius);
   circle(280,200,15);
   arc(280,220,45,135,15);
   circle(350,200,15);
   arc(350,220,45,135,15);

   setfillstyle(EMPTY_FILL, getmaxcolor());
   pieslice(midx,midy,stangle,endangle,radius-80);
   arc(midx,midy,stangle,endangle,radius-40);
   /* clean up */
   getch();
   closegraph();
   return 0;
}



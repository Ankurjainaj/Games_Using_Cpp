 #include <graphics.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>

 int main(void)
 {
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	char msg[80];

	/* initialize graphics and local
variables */
	initgraph(&gdriver, &gmode, "C://TC//BGI");

	/* read result of initialization */
	errorcode = graphresult();
	if (errorcode != grOk)
	{
	   printf("Graphics error: %s\n", grapherrormsg(errorcode));
	   printf("Press any key to halt:");
	   getch();
	   exit(1);
	}

	/* move the C.P. to location (20, 30) */
	moveto(250,150);

	/* create and output a
	   message at (20, 30)
	sprintf(msg, " (%d, %d)", getx(), gety());
	outtextxy(250, 150, msg);
						   */
	/* draw a line to a point a relative
	   distance away from the current
	   value of C.P.   */
	linerel(-88, 90);
	moveto(250,150);
	linerel(92,92);
	 setfillstyle(8, getmaxcolor());
	pieslice(251,332,45,135,127);
	moveto(252,332);
	linerel(-61,61);
	moveto(250,332);
	linerel(62,62);
	moveto(312,394);
	linerel(-122,0);
		/* create and output a message at C.P.
	sprintf(msg, " (%d, %d)", getx(), gety());
	outtext(msg);
										   */
	/* clean up */
	getch();
	closegraph();
	return 0;
 }


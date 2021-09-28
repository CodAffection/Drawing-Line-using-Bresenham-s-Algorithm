// Author : youtube channel-dotnetmob
// Date : 01-May-2015
// Description : program for drawing line using bresenham's line  algorithm

#include<graphics.h>
#include<stdio.h>

void main()
{
  int i,gd=DETECT,gm,x1,y1,x2,y2,dx,dy,pk;
  do
  {
  initgraph(&gd,&gm,"C:\\TurboC3\\bgi");

  printf("Enter start coordinate : ");
  scanf("%d%d",&x1,&y1);
  printf("Enter end coordinate : ");
  scanf("%d%d",&x2,&y2);

  clrscr();
  cleardevice();

  dx=x2-x1;
  dy=y2-y1;
  pk=2*dy-dx;

	do
	{
	 putpixel(x1,y1,GREEN);
	 if(pk<0)
	  pk+=2*dy;
	 else
	 {
	  ++y1;
	  pk+=2*(dy-dx);
	 }
	 ++x1;
	 }while(x1<=x2);

	printf("press 'y' for try again...");
  }while(getch()=='y');
}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 float x1,x2,y1,y2,startx,starty,epsilon;
 int gd=DETECT,gm,i,val;
 int r;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); //Intialize your graphics path
 //drawing the co-ordinate axes
   setcolor(8);
   line(0,240,640,240);
   line(320,0,320,480);
   printf("\n Enter the radius of the circle:");
   scanf("%d",&r);
  x1=r*cos(0);//r*1
  y1=r*sin(0); //r*0
  startx=x1;
  starty=y1;
  i=0;
 do
 {
  val=pow(2,i);
  i++;
  }
  while(val<r);
  printf("\ni=%d\n",i);
  epsilon=1/pow(2,i-1);
  printf("\nepsilon\t%f\n",epsilon);
  do
 {
  x2=x1+epsilon*y1;
  y2=y1-epsilon*x2;
  putpixel(320+x2,240+y2,15);
  x1=x2;
  y1=y2;
  delay(40);
  }
  while((y1-starty)<epsilon||(startx-x1)>epsilon);

  printf("y1\tx1\tStartx\tstarty\t%f\t%f\t%f\t%f",y1,x1,startx,starty);
  printf("\ny1-starty\t%f",y1-starty);
  printf("\nstartx-x1\t%f",startx-x1);

  getch();
  closegraph();

  }
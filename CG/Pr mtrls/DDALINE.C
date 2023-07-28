#include<graphics.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm,i,steps;
int x1,y1,x2,y2,dx,dy;
float x,y,xinc,yinc,m;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("enter values of x1 and y1\n");
scanf("%d%d",&x1,&y1);
printf("enter values of x2 and y2\n");
scanf("%d%d",&x2,&y2);
steps=0;
dx=abs(x2-x1);
dy=abs(y2-y1);
//calculate steps
if(abs(dx)<abs(dy))
steps=abs(dy);
else
steps=abs(dx);
//calculate slope m
m=(float)dy/dx;
printf("dy= %d\n",dy);
printf("dx= %d\n",dx);
printf("m= %f\n",m);
printf("steps=%d\n ",steps);
i=0;
if(m>1){
 xinc=1/m;
 yinc=1.0;}
if(m<1){
 xinc=1.0;
 yinc=m;
}
if (m==1){
xinc=1;
yinc=1;}
x=x1;
y=y1;
putpixel(x,y,15);
setcolor(8);
line(0,240,640,240); //x-axis
line(320,0,320,480);//y-axis

while(i<=steps)
{
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,15);
	delay(10);
	i++;
}
getch();
}
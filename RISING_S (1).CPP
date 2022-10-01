#include<iostream.h>

#include<conio.h>

#include<graphics.h>

#include<conio.h>

#include<dos.h>

void main()

{

void sun();

void mountain();

int gd,gm;

gd=DETECT;

initgraph(&gd,&gm,"C:\\TC\\BGI");

mountain();

sun();

getch();

closegraph();

}

void mountain()

{

line(0,300,200,147);

arc(225,165,30,150,30);

line(250,148,400,300);

line(350,250,498,151);

arc(527,175,43,137,36);

line(553,150,640,250);

}

void sun()

{

int i,j,k,l;

for(i=230,k=150;i>100;i--,k++)

{

setcolor(YELLOW);

for(j=30;j>0;j--)

circle(340,i,j);

setcolor(BROWN);

mountain();

setcolor(YELLOW);

arc(k,250,20,180,6);

arc(k-10,250,20,180,6);

l=k+50;

setcolor(BLUE);

arc(l+100,200,20,180,6);

arc(l+90,200,20,180,6);

arc(l+150,170,30,140,6);

arc(l+140,170,30,140,6);

delay(150);

cleardevice();

}

setcolor(BROWN);

mountain();

setcolor(YELLOW);

for(i=30;i>0;i--)

circle(340,90,i);

getch();

closegraph();

}
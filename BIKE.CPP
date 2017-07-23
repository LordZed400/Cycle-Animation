#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 int i,j=0,k;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");

for(i=0;i<310;i++)
{
 j+=i;
 line(0,340,800,340);

 setcolor(BLUE);
 circle(521+100-i,300,39);
 circle(376+100-i,300,39);
 circle(521+100-i,300,35);
 circle(376+100-i,300,35);

 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(521+100-i,263,BLUE);
 floodfill(376+100-i,263,BLUE);

 setcolor(WHITE);
 pieslice(521+100-i,300,0+i,2+i,35);
 pieslice(521+100-i,300,90+i,92+i,35);
 pieslice(521+100-i,300,270+i,272+i,35);
 pieslice(521+100-i,300,180+i,182+i,35);

 pieslice(376+100-i,300,0+i,2+i,35);
 pieslice(376+100-i,300,90+i,92+i,35);
 pieslice(376+100-i,300,270+i,272+i,35);
 pieslice(376+100-i,300,180+i,182+i,35);

 line(521+100-i,300,456+100-i,300);
 line(456+100-i,300,488+100-i,225);
 line(488+100-i,225,521+100-i,300);

 line(456+100-i,300,396+100-i,225);
 line(396+100-i,225,488+100-i,225);

 line(488+100-i,225,492+100-i,215);

 line(396+100-i,225,376+100-i,300);

 line(396+100-i,225,405+100-i,190);
 rectangle(403+100-i,190,431+100-i,195);
 rectangle(468+100-i,215,508+100-i,205);

 line(485+100-i,205,452+100-i,130);
 circle(439+100-i,114,20);

 line(423+100-i,185,457+100-i,144);
 circle(420+100-i,190,5);

 line(485+100-i,205,435+100-i,245);
 line(435+100-i,245,448+100-i,296);

 rectangle(430+100-i,296,454+100-i,300);

if(i%5==0)
{
j=0;
}
gotoxy(5+j,23);
 printf("%c%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177,177);

 delay(15);

 cleardevice();

}
 getch();
 closegraph();

}

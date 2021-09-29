#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
class rocket
{
  public:
  void loading();
  void countdown();
  void ignition();
  void phase_1();
  void phase_2();
  void phase_3();
  void phase_4();
};
void rocket::loading()
{
  int i;
  cout<<"\n\n\n\n\n\t\t\t\t   LOADING...\n\t\t\t";
  for(i=0;i<30;i++)
  {
     cout<<"|";
     delay(50);
  }
}
void rocket::ignition()
{ //rocket body
  //cleardevice();
  int x1=270,x2=310,y1=220,y2=370,i;
  int p1=280,q1=200,p2=300,pb1y1=180,pb1y2=120,tipy=80,tipx=290;
  int pb1x1=272,pb1x2=308;
  int box1=286,boy1=395,box2=294;
  int boy2=405;
  int ciry=150;
  //companion rocket
    int lx1=245,lx2=268,ly1=270;
    int lp1=254,lq1=390;
    int lp2=259,lq2=396;
    int ltipx1=256.5,ltipy1=250;
     int rx1=312,rx2=335,ry1=270;
     int rtipy1=250,rtipx1=323.5;
     int rp1=321,rp2=326;
    //cop------
    //hands
    int hx1=130,hx2=250,hy1=150,hy2=160;
    int mx1=250,mx2=290,my1=140,my2=170;
    int  rhx1=450,rhx2=330;
    int rmx1=330,rmx2=290;
    int hy11=320,hy22=330;
    int my11=310,my22=340;
    //----
  for(i=0;i<570;i++)
  { cleardevice();
    if(i>0 && i<100)
    { 	outtextxy(20,50,"READY FOR THE LAUNCH");
      if(i>0 && i<20)
      {
	 outtextxy(50,60,"3");
      }
       else if(i>20 && i<40)
      {
	 outtextxy(50,60,"2");
      }
       else if(i>40 && i<60)
      {
	 outtextxy(50,60,"1");
      }
       else if(i>60 && i<100)
      {
	 outtextxy(50,60,"Ignition");
      }
    }
    if(i>0 && i<150)
    {
      outtextxy(460,40,"Rocket speed");
      outtextxy(470,50,"0m/s");
      outtextxy(460,60,"Distance to leave");
      outtextxy(470,70,"atmosphere");
      outtextxy(470,80,"5000km");
    }
    else
    {
      outtextxy(460,40,"Rocket speed");
      outtextxy(470,50,"1332m/s");
      outtextxy(460,60,"Distance to leave");
      outtextxy(470,70,"atmosphere");
      outtextxy(470,80,"5000km");
    }
    if(i>170)
    { setcolor(4);
    line(x1,y1,p1,q1);
    line(x2,y1,p2,q1);
    line(p1,q1,p2,q1);
    line(p1,q1,pb1x1,pb1y1);
    line(p2,q1,pb1x2,pb1y1);
    rectangle(pb1x1,pb1y1,pb1x2,pb1y2);
   // circle(tipx,ciry,8);
    line(pb1x1,pb1y2,tipx,tipy);
    line(pb1x2,pb1y2,tipx,tipy);
    rectangle(x1,y1,x2,y2);
    //companion rocket left
    rectangle(lx1,ly1,lx2,y2);
    line(lx1,y2,lp1,lq1);
    line(lx2,y2,lp2,lq1);
    line(lp1,lq1,lp1,lq2);
    line(lp2,lq1,lp2,lq2);
    line(lx1,ly1,ltipx1,ltipy1);
    line(lx2,ly1,ltipx1,ltipy1);
    //-------
    //companion rocket right

     rectangle(rx1,ry1,rx2,y2);
     line(rx1,ry1,rtipx1,rtipy1);
     line(rx2,ry1,rtipx1,rtipy1);
     line(rx1,y2,rp1,lq1);
     line(rx2,y2,rp2,lq1);
     line(rp1,lq1,rp1,lq2);
     line(rp2,lq1,rp2,lq2);
    //-------
    line(x1,y2,box1,boy1);
    line(x2,y2,box2,boy1);
    line(box1,boy1,box1,boy2);
    line(box2,boy1,box2,boy2);
    }
    else{ setcolor(4);
	line(x1,y1,p1,q1);
    line(x2,y1,p2,q1);
    line(p1,q1,p2,q1);
    line(p1,q1,pb1x1,pb1y1);
    line(p2,q1,pb1x2,pb1y1);
    rectangle(pb1x1,pb1y1,pb1x2,pb1y2);
   // circle(tipx,ciry,8);
    line(pb1x1,pb1y2,tipx,tipy);
    line(pb1x2,pb1y2,tipx,tipy);
    rectangle(x1,y1,x2,y2);
    //companion rocket left
    rectangle(lx1,ly1,lx2,y2);
    line(lx1,y2,lp1,lq1);
    line(lx2,y2,lp2,lq1);
    line(lp1,lq1,lp1,lq2);
    line(lp2,lq1,lp2,lq2);
    line(lx1,ly1,ltipx1,ltipy1);
    line(lx2,ly1,ltipx1,ltipy1);
    //-------
    //companion rocket right

     rectangle(rx1,ry1,rx2,y2);
     line(rx1,ry1,rtipx1,rtipy1);
     line(rx2,ry1,rtipx1,rtipy1);
     line(rx1,y2,rp1,lq1);
     line(rx2,y2,rp2,lq1);
     line(rp1,lq1,rp1,lq2);
     line(rp2,lq1,rp2,lq2);
    //-------
    line(x1,y2,box1,boy1);
    line(x2,y2,box2,boy1);
    line(box1,boy1,box1,boy2);
    line(box2,boy1,box2,boy2);
    }
    setcolor(3);
    rectangle(180,405,400,470);

    line(170,405,150,380);
    line(170,405,170,470);
    line(150,380,20,380);
    line(20,380,20,470);
    line(20,470,180,470);
    rectangle(130,380,20,100);
    line(20,100,130,170);
    line(130,100,20,170);
    line(20,170,130,240);
    line(130,170,20,240);
    line(20,240,130,310);
    line(130,240,20,310);
    line(20,310,130,380);
    line(130,310,20,380);
    rectangle(hx1,hy1,hx2,hy2);
    rectangle(mx1,my1,mx2,my2);
    rectangle(hx1,hy11,hx2,hy22);
    rectangle(mx1,my11,mx2,my22);
    //right support
    line(410,405,430,380);
    line(410,405,410,470);
    line(430,380,560,380);
    line(560,380,560,470);
    line(560,470,400,470);
    rectangle(450,380,560,100);
    line(450,100,560,170);
    line(560,100,450,170);
    line(450,170,560,240);
    line(560,170,450,240);
    line(450,240,560,310);
    line(560,240,450,310);
    line(450,310,560,380);
    line(560,310,450,380);

    rectangle(rhx1,hy1,rhx2,hy2);
    rectangle(rmx1,my1,rmx2,my2);
    rectangle(rhx1,hy11,rhx2,hy22);
    rectangle(rmx1,my11,rmx2,my22);
       if(i<170 && i>100)
    {
     hx2--;
     mx1--;
     mx2--;
     rhx2++;
     rmx1++;
     rmx2++;
    }
    //-------
    //coordinates decreament
    if(i>150)
    {
    y1--;
    y2--;
    boy1--;
    boy2--;
    q1--;
    pb1y1--;
    pb1y2--;
    tipy--;
    ciry--;

    //companion rocket
    ly1--;
    lq1--;
    lq2--;
    ry1--;
    ltipy1--;
    rtipy1--;
    }
    //----
   delay(15);
  }
  //rocket body
}
void rocket::phase_1()
{
  int x1=270,x2=310,y1=220,y2=370,i;
  int p1=280,q1=200,p2=300,pb1y1=180,pb1y2=120,tipy=80,tipx=290;
  int pb1x1=272,pb1x2=308;
  int box1=286,boy1=395,box2=294;
  int boy2=405;
  int ciry=150;
  //companion rocket
    int lx1=245,lx2=268,ly1=270;
    int lp1=254,lq1=390;
    int lp2=259,lq2=396;
    int ltipx1=256.5,ltipy1=250;
     int rx1=312,rx2=335,ry1=270;
     int rtipy1=250,rtipx1=323.5;
     int rp1=321,rp2=326;
    //cop------

    int ly2=370,ry2=370;
    //----
     for(i=0;i<100;i++)
  {
    outtextxy(250,300,"Phase 1 starting");
    delay(30);
  }
  for(i=0;i<430;i++)
  { cleardevice();
      setcolor(3);
      outtextxy(460,40,"Rocket speed");
      outtextxy(470,50,"1032m/s");
      outtextxy(460,60,"Distance to leave");
      outtextxy(470,70,"atmosphere");
      outtextxy(470,80,"3000km");

    setcolor(4);
    line(x1,y1,p1,q1);
    line(x2,y1,p2,q1);
    line(p1,q1,p2,q1);
    line(p1,q1,pb1x1,pb1y1);
    line(p2,q1,pb1x2,pb1y1);
    rectangle(pb1x1,pb1y1,pb1x2,pb1y2);
   // circle(tipx,ciry,8);
    line(pb1x1,pb1y2,tipx,tipy);
    line(pb1x2,pb1y2,tipx,tipy);
    rectangle(x1,y1,x2,y2);
    //companion rocket left
    rectangle(lx1,ly1,lx2,ly2);
    line(lx1,ly2,lp1,lq1);
    line(lx2,ly2,lp2,lq1);
    line(lp1,lq1,lp1,lq2);
    line(lp2,lq1,lp2,lq2);
    line(lx1,ly1,ltipx1,ltipy1);
    line(lx2,ly1,ltipx1,ltipy1);
    //-------
    //companion rocket right

     rectangle(rx1,ry1,rx2,ry2);
     line(rx1,ry1,rtipx1,rtipy1);
     line(rx2,ry1,rtipx1,rtipy1);
     line(rx1,ry2,rp1,lq1);
     line(rx2,ry2,rp2,lq1);
     line(rp1,lq1,rp1,lq2);
     line(rp2,lq1,rp2,lq2);
    //-------
    line(x1,y2,box1,boy1);
    line(x2,y2,box2,boy1);
    line(box1,boy1,box1,boy2);
    line(box2,boy1,box2,boy2);
    y1--;
    y2--;
    boy1--;
    boy2--;
    q1--;
    pb1y1--;
    pb1y2--;
    tipy--;
    ciry--;

    //companion rocket
    if(i<50)
    {
    ly1--;
    lq1--;
    lq2--;
    ly2--;
    ry1--;
    ry2--;
    ltipy1--;
    rtipy1--;
    }
    if(i>50)
    {
      lx1--;
      lx2--;
      ly1++;
      ly2++;
      ltipx1--;
      ltipy1++;
      lp1--;
      lp2--;
      lq2++;
      lq1++;
      ///right
      rx1++;
      rx2++;
      ry1++;
      ry2++;
      rtipx1++;
      rtipy1++;
      rp1++;
      rp2++;
      //------
    }

    //----
   delay(15);
  }
  //rocket body
}
void rocket::phase_2()
{
  int x1=270,x2=310,y1=220,y2=370,i;
  int p1=280,q1=200,p2=300,pb1y1=180,pb1y2=120,tipy=80,tipx=290;
  int p11=280,q11=200,p22=300;
  int pb1x1=272,pb1x2=308;
  int box1=286,boy1=395,box2=294;
  int boy2=405;
  int ciry=150;
  for(i=0;i<100;i++)
  {
    outtextxy(250,300,"Phase 2 starting");
    delay(30);
  }
  for(i=0;i<430;i++)
  { cleardevice();
      setcolor(3);
      outtextxy(460,40,"Rocket speed");
      outtextxy(470,50,"1289.67m/s");
      outtextxy(460,60,"Distance to leave");
      outtextxy(470,70,"atmosphere");
      outtextxy(470,80,"437.35km");

    setcolor(4);
    line(x1,y1,p1,q1);
    line(x2,y1,p2,q1);
    line(p11,q11,p22,q11);
    line(p1,q11,pb1x1,pb1y1);
    line(p2,q11,pb1x2,pb1y1);
    rectangle(pb1x1,pb1y1,pb1x2,pb1y2);
   // circle(tipx,ciry,8);
    line(pb1x1,pb1y2,tipx,tipy);
    line(pb1x2,pb1y2,tipx,tipy);
    rectangle(x1,y1,x2,y2);
    line(x1,y2,box1,boy1);
    line(x2,y2,box2,boy1);
    line(box1,boy1,box1,boy2);
    line(box2,boy1,box2,boy2);
     tipy--;
    ciry--;
    if(i<20)
    {
    y1--;
    y2--;
    boy1--;
    boy2--;
    q1--;
    q11--;
    pb1y1--;
    pb1y2--;
    }

    else
    {
      y1++;
      y2++;
      boy1++;
      boy2++;
      q1++;
      q11--;
      pb1y1--;
      pb1y2--;
    }
   //------
   delay(15);
  }
  //rocket body
}
void rocket::phase_3()
{
  int i;
  int p1=280,q1=200,p2=300,pb1y1=380,pb1y2=320,tipy=280,tipx=290;
  int p11=280,q11=400,p22=300;
  int pb1x1=272,pb1x2=308;
  //tail
  int tx1=285,tx2=295,ty1=400,ty2=400;
  //-----
  int ciry=150;
  int sy1=345,sy2=355,sx1=308,sx2=308;
  int srx1=328,sry1=325,sry2=375,srx2=328;
  int slx1=272,slx2=272,slp1=252,slp2=252;
  int ttx1=285,tty1=400,ttx2=295,tty2;
  /*for(i=0;i<100;i++)
  {
    outtextxy(250,300,"Phase 3 starting");
    delay(30);
  } */
  for(i=0;i<550;i++)
  { cleardevice();
      setcolor(3);
      outtextxy(460,40,"Rocket speed");
      outtextxy(470,50,"unidentified");
      outtextxy(460,70,"Rocket leaved");
      outtextxy(470,80,"atmosphere");
      outtextxy(470,90,"0km");

    setcolor(4);
    line(p11,q11,p22,q11);
    line(p1,q11,pb1x1,pb1y1);
    line(p22,q11,pb1x2,pb1y1);
    //tail
    rectangle(tx1,ty1,tx2,ty2);
    line(tx1,ty2,ttx1,tty1);
    line(tx2,ty2,ttx2,tty1);
    //tail body
    if(i>465 && i<550)
    {  tty2=tty1;
    rectangle(ttx1,tty1,ttx2,tty2);
    }
    //
    //-----
    rectangle(pb1x1,pb1y1,pb1x2,pb1y2);
   // circle(tipx,ciry,8);
    line(pb1x1,pb1y2,tipx,tipy);
    line(pb1x2,pb1y2,tipx,tipy);
    //solar panels right
     //setfillstyle(HATCH_FILL,6);
     rectangle(sx1,sy1,sx2,sy2);
     if(i>190 && i<300)
     {
     rectangle(srx1,sry1,srx2,sry2);
     rectangle(slp1,sry1,slp2,sry2);
     }
     else if(i>300 && i<550)
     {
     rectangle(srx1,sry1,srx2,sry2);
     rectangle(slp1,sry1,slp2,sry2);
     }
     //--------
     //tail
     if(i>430 && i<450)
     {
       ty2++;
     }
     if(i>450 && i<465)
     {
       ttx1--;
       tty1++;
       tty1++;
       tty1++;
       ttx2++;
      // tty2++;
      // t/ty2++;
      // tty3++;
     }
     if(i>465 && i<550)
     {
       tty2++;
       tty2++;
     }
     //----
     //solar panels left
      rectangle(slx1,sy1,slx2,sy2);

     //--------
    if(i<170)
    {
    tipy--;
    ciry--;
    q11--;
    pb1y1--;
    pb1y2--;
    sy1--;
    sy2--;
    sry1--;
    sry2--;
    ty1--;
    ty2--;
    tty1--;
    //tty2--;
    //tty3--;
    }
    else
    {  if(i>170 && i<190)
      {
       sx2++;
       slx1--;
      }
      else if(i>190 && i<300)
      {
       srx2++;
       slp1--;
      }
    }
    //------

   delay(15);
  }
  //rocket body

}
void main()
{
  rocket r;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  r.loading();
  cleardevice();
  r.ignition();
  cleardevice();
  r.phase_1();
  cleardevice();
  r.phase_2();
  cleardevice();
  r.phase_3();
  getch();
  closegraph();
}


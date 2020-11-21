
#include <graphics.h>
#include <stdio.h>

int main(){
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

setcolor(14);
    while(!kbhit()){
            //star
    putpixel(rand()%630,rand()%50,WHITE);
    delay(10);


    //ground
    line(0,230,70,230);
    delay(10);
    line(540,230,650,230);
    delay(10);

    //moon
    arc(60,40,150,-90,20);
    arc(62,40,150,-90,20);


    {int i;
    for(i=0;i<10;++i){

        line(50+i,150,150+i,50);
        delay(10);
    }}
    {
    line(160,50,230,150);
    delay(10);
    line(150,50,400,50);
    delay(10);
    line(400,50,480,150);
    delay(10);
    line(230,150,480,150);
    delay(10);
    line(230,150,290,190);
    delay(10);
    line(480,150,540,190);
    delay(10);
    line(290,190,540,190);
    delay(10);
    line(70,130,70,262);
    delay(10);
    setfillstyle(SOLID_FILL,1);
    floodfill(320,100,14);
    setfillstyle(SOLID_FILL,1);
    floodfill(385,170,14);


    {int i;
    for(i=0;i<10;++i){
    line(60,260+i,230,310+i);
    delay(10);}}

    line(230,150,230,310);
    delay(10);
    line(290,190,290,320);
    delay(10);

    {int i;
    for(i=0;i<10;++i){
    line(230,310+i,290,320+i);
    delay(10);}}

    line(540,190,540,320);
    delay(10);

    {int i;
    for(i=0;i<10;++i){
    line(290,320+i,550,320+i);
    delay(10);}}

    line(480,190,480,280);
    delay(10);
    line(290,280,480,280);
    delay(10);
    line(480,280,540,320);
    delay(10);
    setfillstyle(SOLID_FILL,12);
    floodfill(385,235,14);
    setfillstyle(SOLID_FILL,8);
    floodfill(415,300,14);
    setfillstyle(SOLID_FILL,9);
    floodfill(260,235,14);
    setfillstyle(SOLID_FILL,12);
    floodfill(510,255,14);
    setfillstyle(SOLID_FILL,9);
    floodfill(145,230,14);
    }

    //window
    line(110,160,110,230);
    delay(10);
    line(110,160,180,180);
    delay(10);
    line(180,180,180,250);
    delay(10);
    line(110,230,180,250);
    delay(10);
    setfillstyle(SOLID_FILL,3);
    floodfill(145,205,14);

    //grill
    line(120,163,120,233);
    delay(10);
    line(130,166,130,236);
    delay(10);
    line(140,169,140,239);
    delay(10);
    line(150,172,150,242);
    delay(10);
    line(160,175,160,245);
    delay(10);
    line(170,178,170,248);
    delay(10);

    //window
    line(245,215,245,258);
    delay(10);
    line(245,215,275,225);
    delay(10);
    line(275,225,275,268);
    delay(10);
    line(245,258,275,268);
    delay(10);
    setfillstyle(SOLID_FILL,3);
    floodfill(260,241.5,14);

    //grill
    line(255,218,255,261);
    delay(10);
    line(265,221,265,264);
    delay(10);

    //Door
    {rectangle(360,210,410,280);
    delay(10);
    line(380,220,380,270);
    delay(10);
    line(390,220,390,270);
    delay(10);
    line(360,210,380,220);
    delay(10);
    line(380,270,360,280);
    delay(10);
    line(390,270,410,280);
    delay(10);
    line(390,220,410,210);
    delay(10);

    setfillstyle(SOLID_FILL,3);
    floodfill(385,245,14);

    setfillstyle(SOLID_FILL,4);
    floodfill(370,240,14);

    setfillstyle(SOLID_FILL,4);
    floodfill(400,250,14);}


    //window
    setbkcolor(7);

    rectangle(310,230,340,260);
    delay(10);
    setfillstyle(SOLID_FILL,4);
    floodfill(325,245,14);
    rectangle(320,230,330,260);
    delay(10);
    setfillstyle(SOLID_FILL,3);
    floodfill(325,245,14);
    rectangle(430,230,460,260);
    delay(10);
    setfillstyle(SOLID_FILL,4);
    floodfill(445,245,14);
    rectangle(440,230,450,260);
    delay(10);
    setfillstyle(SOLID_FILL,3);
    floodfill(445,245,14);


    //road
    line(380,330,300,375);
    delay(10);
    line(450,330,380,375);
    delay(10);
    line(300,375,500,550);
    delay(10);
    line(380,375,650,500);
    delay(10);
    setfillstyle(SOLID_FILL,2);
    floodfill(415,365,14);
    setfillstyle(SOLID_FILL,3);
    floodfill(380,352.5,14);
    setfillstyle(SOLID_FILL,2);
    floodfill(250,390,14);

    }

    setfillstyle(SOLID_FILL,14);
    floodfill(361,211,15);
    getchar();
    return 0;
}

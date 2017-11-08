#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{

    int i,a;
    int gd=DETECT;
    int gm;
    clrscr();
    initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
    printf(" ");
    printf("                 WELCOME  IN PRO-GRA APPLICATION EXPERIMENT 1 !\n   ");
    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    delay(2000);
    printf("   PROGRAMME LOADING WAIT  ");

    for(i=0;i<5;i++)
   {
    printf(".");
    delay(1000);
    }

    cleardevice();
    printf("            \n ");
    printf("                      PRO-GRA APPLICATION EXPERIMENT 1   ");

    printf("                                                                                                    .\n");

    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    delay(2000);
    printf(" Q= Choose any shape you want to see how to make that in c/c++ ?\n");
    delay(2000);
    printf(" 1. CIRCLE\n");
    printf(" 2. SQUARE\n");
    printf(" 3. RECTANGLE\n");
    printf(" 4. ELLIPSE\n");
    printf(" 5. LINE\n");
    //printf("                                                                                                     .\n");
    printf(" Enter number= ");
    scanf("%d",&a);

    if(a==1)
    {
    cleardevice();
    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    line(0,1,640,1);
    line(320,0,320,478);
    circle(460,200,80);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(420,40,"CIRCLE");
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(60,40,"PROGRAMME FOR CIRCLE");
    printf(" #include<iostream.h>\n");
    printf(" #include<graphics.h>\n");
    printf(" #include<conio.h>\n");
    printf("                                       .\n");
    printf("  int main() \n");
    printf("   { \n");
    printf("      int gd=DETECT,gm;\n");
    printf("      initgraph(&gd,&gm,''c:\\tc\\bgi'');\n");
    printf("      circle(460,200,80);\n");
     printf("                                       .\n");
    printf("      //circle(int x , int y , radius) \n");
     printf("                                       .\n");
    printf("     getch();\n");
    printf("     closegraph();\n");
    printf("   }\n");

    }
     if(a==2)
    {
    cleardevice();
    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    line(0,1,640,1);
    line(320,0,320,478);
    rectangle(420,200,520,300);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(420,50,"SQAURE");
	settextstyle(3,HORIZ_DIR,1);
    outtextxy(60,40,"PROGRAMME FOR SQUARE");
    printf(" #include<iostream.h>\n");
    printf(" #include<graphics.h>\n");
    printf(" #include<conio.h>\n");
    printf("                                       .\n");
    printf("  int main() \n");
    printf("   { \n");
    printf("     int gd=DETECT,gm;\n");
    printf("     initgraph(&gd,&gm,''c:\\tc\\bgi'');\n");
    printf("     rectangle(420,200,520,300);\n");
     printf("                                       .\n");
    printf("   //rectangle(x1 , y1 , x2 , y2 )\n");
     printf("                                       .\n");
    printf("     getch();\n");
    printf("     closegraph();\n");
    printf("   }\n");

    }
      if(a==3)
    {
    cleardevice();
    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    line(0,1,640,1);
    line(320,0,320,478);
    rectangle(420,200,540,280);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(420,50,"RECTANGLE");
	settextstyle(3,HORIZ_DIR,1);
    outtextxy(60,40,"PROGRAMME FOR RECTANGLE");
    printf(" #include<iostream.h>\n");
    printf(" #include<graphics.h>\n");
    printf(" #include<conio.h>\n");
    printf("                                       .\n");
    printf("  int main() \n");
    printf("   { \n");
    printf("      int gd=DETECT,gm;\n");
    printf("      initgraph(&gd,&gm,''c:\\tc\\bgi'');\n");
    printf("      rectangle(420,200,540,280);\n");
     printf("                                       .\n");
    printf("      //rectangle(x1 , y1 , x2 , y2) \n");
     printf("                                       .\n");
    printf("     getch();\n");
    printf("     closegraph();\n");
    printf("   }\n");

    }
      if(a==4)
    {
    cleardevice();
    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    line(0,1,640,1);
    line(320,0,320,478);
    ellipse(450,250,0,360,40,80);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(420,50,"ELLIPSE");
	settextstyle(3,HORIZ_DIR,1);
    outtextxy(60,40,"PROGRAMME FOR ELLIPSE");
    printf(" #include<iostream.h>\n");
    printf(" #include<graphics.h>\n");
    printf(" #include<conio.h>\n");
    printf("                                       .\n");
    printf("  int main() \n");
    printf("   { \n");
    printf("     int gd=DETECT,gm;\n");
    printf("     initgraph(&gd,&gm,''c:\\tc\\bgi'');\n");
    printf("     ellipse(450,250,0,360,40,80);\n");
     printf("                                       .\n");
    printf("   //ellipse(x,y,s-ang,e-ang,x-rad,y-rad);\n");
     printf("                                       .\n");
    printf("     getch();\n");
    printf("     closegraph();\n");
    printf("   }\n");

    }


    if(a==5)
    {
    cleardevice();
    settextstyle(3, HORIZ_DIR,1);
    outtextxy(400,450,"CREATED BY ATINDER SINGH");
    line(0,1,640,1);
    line(320,0,320,478);
    line(450,170,540,270);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(420,50,"LINE");
	settextstyle(3,HORIZ_DIR,1);
    outtextxy(60,40,"PROGRAMME FOR LINE");
    printf(" #include<iostream.h>\n");
    printf(" #include<graphics.h>\n");
    printf(" #include<conio.h>\n");
    printf("                                       .\n");
    printf("  int main() \n");
    printf("   { \n");
    printf("      int gd=DETECT,gm;\n");
    printf("      initgraph(&gd,&gm,''c:\\tc\\bgi'');\n");
    printf("      line(470,170,540,270);\n");
     printf("                                       .\n");
    printf("      //line(x1,y1 , x2,y2);\n");
     printf("                                       .\n");
    printf("     getch();\n");
    printf("     closegraph();\n");
    printf("   }\n");

    }



   /* for(i=0;i<5;i++)
    {
    delay(1000);
    printf(".");
    }
    exit(0);*/


    getch();
}
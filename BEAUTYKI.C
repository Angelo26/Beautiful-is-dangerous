			  //Made by Angel Maden
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver = DETECT,gmode;
int x,y,i,j,k,a,b,m,n,c,d;
initgraph(&gdriver,&gmode,"..\\BGI");
x=getmaxx()/4;
y=getmaxy()/4;
a=getmaxx();
b=getmaxy()/4;
m=getmaxx()-90;
n=getmaxy()/4;
c=getmaxx()/2;
d=getmaxy()/2;

	for(x=0;x<=125;x+=4)           	  //To walk further increase x
	{
		for(i=0;i<=15;i+=3)    		  //foot length
		{ 		 //boy
		delay(50);                        //walking speed
		cleardevice();
		circle(x+8,y+12,24); 	 	  //head
		pieslice(x+8,y+12,45,250,24);     //hair
		pieslice(x+20,y+24,290+i,360-i,7);//mouth
		outtextxy(x+22,y+8,"O");   	  //eye
		outtextxy(x+24,y+5,".");   	  //eye dot
		line(x,y+34,x,y+100);             //body
		line(x,y+55,x+15,y+68);     	  //rhand
		line(x+15,y+68,x+31,y+59);        //rhand
		line(x,y+55,x+15,y+63); 	  //larm
		line(x+15,y+63,x+31,y+57); 	  //larm
		ellipse(x+34,y+57,0,360,4,2);     //hand
		line(x+34,y+56,x+31,y+22);  	  //umbrella stick
		line(x+29,y-1,x+25,y-40);     	  //umbrella stick
		pieslice(x+30,y-25,10,190,70);    //umbrella
		line(0,b+160,234,b+155);          //lhground
		line(234,b+155,240,b+600);        //lvground
		line(a,b+148,a-83,b+150);         //rhground
		line(a-98,b+150,a-270,b+149);     //rhground
		line(a-270,b+150,a-260,b+600);    //rvground
		line(0,b+155,234,b+155);          //lhground
		line(234,b+155,259,b+800);        //lvground
		line(a,b+155,a-83,b+155);         //rhground
		line(a-98,b+155,a-270,b+157);     //rhground
		line(a-270,b+155,a-275,b+600);    //rvground
		line(x,y+100,(x+15)-i,y+150);     //rleg
		line(x,y+100,(x-15)+i,y+150);     //lleg
		ellipse((x+18)-i,y+152,0,360,6,3);//rfoot
		ellipse((x-12)+i,y+152,0,360,6,3);//lfoot
		outtextxy(x+45,y-5,"Beautiful day...");
		outtextxy(x+45,y+5,"I'm walking away...");
		outtextxy(x+45,y+15,"From my home...");
		outtextxy(x+45,y+25,"All alone...");
		outtextxy(x+45,y+35,"lalalalla lalalalla...");
		outtextxy(x+45,y+45,"lalala hmhmhm");
		//girl
		circle(m,n+30,23); 	          //head
		arc(m-23,n+5,270,328,28);         //hair
		arc(m+23,n+5,183,270,28);         //hair
		ellipse(m+21,n+42,0,360,1,3);     //earrings
		ellipse(m-21,n+42,0,360,1,3);     //earrings
		ellipse(m+5,n+57,0,360,2,5);      //hair
		ellipse(m+5,n+65,0,360,2,4);      //hair
		ellipse(m+5,n+72,0,360,1,3);      //hair
		line(m-4,n+48,m+4,n+47);          //mouth
		outtextxy(m-11,n+35,"0 0");       //eye
		outtextxy(m-11,n+34,". .");  	  //eye dot
		line(m,n+54,m,n+72);              //body
		line(m,n+82,m,n+110);             //body
		line(m-11,n+62,m+11,n+62);        //shoulder
		line(m+11,n+62,m+15,n+86);        //rarm
		line(m+3,n+81,m+15,n+86);         //rarm
		line(m-11,n+62,m-15,n+86);        //larm
		line(m-3,n+81,m-15,n+86); 	  //larm
		ellipse(m,n+78,0,360,2,5);        //hand
		pieslice(m,n+118,0,180,24);       //frock
		line(m+3,n+112,m+4,n+150);        //rleg
		line(m-3,n+112,m-4,n+150);        //lleg
		ellipse(m+4,n+152,0,360,3,6);     //rfoot
		ellipse(m-4,n+152,0,360,3,6);     //lfoot
		pieslice(80,30,0,360,20);         //sun
		outtextxy(m-100,n+70,"Texting...");
		outtextxy(m+32,n+60,"CLICK!");
		outtextxy(m+36,n+70,"CLICK!");
		outtextxy(m+40,n+80,"CLICK!");
		}
	}
	for(i=0;i<=10;i+=4)  		          //foot length
	{                //boy
		delay(600);               	  //walking speed
		cleardevice();
		circle(x+8,y+12,24);  	          //head
		pieslice(x+8,y+12,45,250,24);     //hair
		pieslice(x+20,y+24,290+i,360-i,7);//mouth
		outtextxy(x+22,y+8,"O");    	  // eye
		outtextxy(x+24,y+5,".");	  //eye dot
		line(x,y+34,x,y+100);     	  //body
		line(x,y+55,x+15,y+68);    	  //rhand
		line(x+15,y+68,x+31,y+59);        //rhand
		line(x,y+55,x+15,y+63);           //larm
		line(x+15,y+63,x+31,y+57);        //larm
		ellipse(x+34,y+57,0,360,4,2);     //hand
		line(x+34,y+56,x+31,y+22);  	  //umbrella stick
		line(x+29,y-1,x+25,y-40);         //umbrella stick
		pieslice(x+30,y-25,10,190,70);    //umbrella
		line(0,b+160,234,b+155);          //lhground
		line(234,b+155,240,b+600);        //lvground
		line(a,b+148,a-83,b+150);         //rhground
		line(a-98,b+150,a-270,b+149);     //rhground
		line(a-270,b+150,a-260,b+600);    //rvground
		line(0,b+155,234,b+155);          //lhground
		line(234,b+155,259,b+800);        //lvground
		line(a,b+155,a-83,b+155);         //rhground
		line(a-98,b+155,a-270,b+157);     //rhground
		line(a-270,b+155,a-275,b+600);    //rvground
		line(x,y+100,(x+2),y+150);   	  //rleg
		line(x,y+100,(x-2),y+150);  	  //lleg
		ellipse((x+5),y+152,0,360,6,3);   //rfoot
		ellipse((x+1),y+152,0,360,6,3);   //lfoot
		outtextxy(x+40,y+10,"Damn! what a beautyyy...");
		outtextxy(x+40,y+30,"I think I should talk to her...");
			  //girl
		circle(m,n+30,23); 	       	  //head
		arc(m-23,n+5,270,328,28);         //hair
		arc(m+23,n+5,183,270,28);         //hair
		ellipse(m+21,n+42,0,360,1,3);     //earrings
		ellipse(m-21,n+42,0,360,1,3);     //earrings
		ellipse(m+5,n+57,0,360,2,5);      //hair
		ellipse(m+5,n+65,0,360,2,4);      //hair
		ellipse(m+5,n+72,0,360,1,3);      //hair
		line(m-4,n+48,m+4,n+47);          //mouth
		outtextxy(m-11,n+35,"0 0");       //eye
		outtextxy(m-11,n+34,". .");    	  //eye dot
		line(m,n+54,m,n+72);              //body
		line(m,n+82,m,n+110);             //body
		line(m-11,n+62,m+11,n+62);        //shoulder
		line(m+11,n+62,m+15,n+86);        //rarm
		line(m+3,n+81,m+15,n+86);         //rarm
		line(m-11,n+62,m-15,n+86);        //larm
		line(m-3,n+81,m-15,n+86); 	  //larm
		ellipse(m,n+78,0,360,2,5);  	  //hand
		pieslice(m,n+118,0,180,24);       //frock
		line(m+3,n+112,m+4,n+150);        //rleg
		line(m-3,n+112,m-4,n+150);        //lleg
		ellipse(m+4,n+152,0,360,3,6);     //rfoot
		ellipse(m-4,n+152,0,360,3,6);     //lfoot
		pieslice(80,30,0,360,20);         //sun
		outtextxy(m-100,n+70,"Texting...");
		outtextxy(m+32,n+60,"CLICK!");
		outtextxy(m+36,n+70,"CLICK!");
		outtextxy(m+40,n+80,"CLICK!");
		}
	for(x=135;x<=278;x+=7) 			  //To walk further increase x
	{
		for(i=0;i<=15;i+=3)   	          //foot length
		{          //boy
		delay(40);              		  //walking speed
		cleardevice();
		circle(x+8,y+12,24);  		  //head
		pieslice(x+8,y+12,45,250,24);     //hair
		pieslice(x+20,y+24,290+i,360-i,7);//mouth
		outtextxy(x+22,y+8,"O");  	  //eye
		outtextxy(x+24,y+5,".");  	  //eye dot
		line(x,y+34,x,y+100);    	  //body
		line(x,y+55,x+15,y+68);    	  //rhand
		line(x+15,y+68,x+31,y+59);   	  //rhand
		line(x,y+55,x+15,y+63);   	  //larm
		line(x+15,y+63,x+31,y+57);	  //larm
		ellipse(x+34,y+57,0,360,4,2);     //hand
		line(x+34,y+56,x+31,y+22);	  //umbrella stick
		line(x+29,y-1,x+25,y-40);    	  //umbrella stick
		pieslice(x+30,y-25,10,190,70);    //umbrella
		line(0,b+160,234,b+155);          //lhground
		line(234,b+155,240,b+600);        //lvground
		line(a,b+148,a-83,b+150);         //rhground
		line(a-98,b+150,a-270,b+149);     //rhground
		line(a-270,b+150,a-260,b+600);    //rvground
		line(0,b+155,234,b+155);          //lhground
		line(234,b+155,259,b+800);        //lvground
		line(a,b+155,a-83,b+155);         //rhground
		line(a-98,b+155,a-270,b+157);     //rhground
		line(a-270,b+155,a-275,b+600);    //rvground
		line(x,y+100,(x+15)-i,y+150);     //rleg
		line(x,y+100,(x-15)+i,y+150);     //lleg
		ellipse((x+18)-i,y+152,0,360,6,3);//rfoot
		ellipse((x-12)+i,y+152,0,360,6,3);//lfoot
		outtextxy(x+40,y+10,"you're beautiful...");
		outtextxy(x+40,y+20,"you're beautiful...");
		outtextxy(x+40,y+30,"you're beautiful...");
		outtextxy(x+40,y+40,"and it's true...");
		//girl
		circle(m,n+30,23); 	          //head
		arc(m-23,n+5,270,328,28);         //hair
		arc(m+23,n+5,183,270,28);         //hair
		ellipse(m+21,n+42,0,360,1,3);     //earrings
		ellipse(m-21,n+42,0,360,1,3);     //earrings
		ellipse(m+5,n+57,0,360,2,5);      //hair
		ellipse(m+5,n+65,0,360,2,4);      //hair
		ellipse(m+5,n+72,0,360,1,3);      //hair
		line(m-4,n+48,m+4,n+47);          //mouth
		outtextxy(m-11,n+35,"0 0");       //eye
		outtextxy(m-11,n+34,". .");  	  //eye dot
		line(m,n+54,m,n+72);              //body
		line(m,n+82,m,n+110);             //body
		line(m-11,n+62,m+11,n+62);        //shoulder
		line(m+11,n+62,m+15,n+86);        //rarm
		line(m+3,n+81,m+15,n+86);         //rarm
		line(m-11,n+62,m-15,n+86);        //larm
		line(m-3,n+81,m-15,n+86); 	  //larm
		ellipse(m,n+78,0,360,2,5);     	  //hand
		pieslice(m,n+118,0,180,24);       //frock
		line(m+3,n+112,m+4,n+150);        //rleg
		line(m-3,n+112,m-4,n+150);        //lleg
		ellipse(m+4,n+152,0,360,3,6);     //rfoot
		ellipse(m-4,n+152,0,360,3,6);     //lfoot
		pieslice(80,30,0,360,20);         //sun
		outtextxy(m-100,n+70,"Texting...");
		outtextxy(m+32,n+60,"CLICK!");
		outtextxy(m+36,n+70,"CLICK!");
		outtextxy(m+40,n+80,"CLICK!");
		}
	}
	for(j=0;j<=2;j+=2)
	{
		delay(1700);
		cleardevice();
		circle(x+8,y+12,24);              //head
		pieslice(x+8,y+12,45,250,24);     //hair
		pieslice(x+20,y+24,290+j,360-j,7);    //mouth
		outtextxy(x+21,y+5,"O");    	  //eye
		outtextxy(x+23-j,y+4+j,".");      //eye dot
		line(x,y+34,x,y+100);             //body
		line(x,y+55,x+15,y+68);    	  //rhand
		line(x+15,y+68,x+31,y+59);        //rhand
		line(x,y+55,x+15,y+63);           //larm
		line(x+15,y+63,x+31,y+57);        //larm
		ellipse(x+34,y+57,0,360,4,2);     //hand
		line(x+34,y+56,x+31,y+22);  	  //umbrella stick
		line(x+29,y-1,x+25,y-40);    	  //umbrella stick
		pieslice(x+30,y-25,10,190,70);    //umbrella
		line(0,b+160,234,b+155);          //lhground
		line(234,b+155,240,b+600);        //lvground
		line(a,b+148,a-83,b+150);         //rhground
		line(a-98,b+150,a-270,b+149);     //rhground
		line(a-270,b+150,a-260,b+600);    //rvground
		line(0,b+155,234,b+155);          //lhground
		line(234,b+155,259,b+800);        //lvground
		line(a,b+155,a-83,b+155);         //rhground
		line(a-98,b+155,a-270,b+157);     //rhground
		line(a-270,b+155,a-275,b+600);    //rvground
		line(x,y+100,(x+2),y+150); 	  //rleg
		line(x,y+100,(x-2),y+150);     	  //lleg
		ellipse((x+5),y+152,0,360,6,3);   //rfoot
		ellipse((x+1),y+152,0,360,6,3);   //lfoot
		outtextxy(x+45,y,"WAIT...");
		outtextxy(x+45,y+15,"Why I can't feel");
		outtextxy(x+49,y+30,"anything below?");
		//girl
		circle(m,n+30,23); 	          //head
		arc(m-23,n+5,270,328,28);         //hair
		arc(m+23,n+5,183,270,28);         //hair
		ellipse(m+21,n+42,0,360,1,3);     //earrings
		ellipse(m-21,n+42,0,360,1,3);     //earrings
		ellipse(m+5,n+57,0,360,2,5);      //hair
		ellipse(m+5,n+65,0,360,2,4);      //hair
		ellipse(m+5,n+72,0,360,1,3);      //hair
		line(m-4,n+48,m+4,n+47);          //mouth
		outtextxy(m-11,n+35,"0 0");       //eye
		outtextxy(m-11,n+34,". .");  	  //eye dot
		line(m,n+54,m,n+72);              //body
		line(m,n+82,m,n+110);             //body
		line(m-11,n+62,m+11,n+62);        //shoulder
		line(m+11,n+62,m+15,n+86);        //rarm
		line(m+3,n+81,m+15,n+86);         //rarm
		line(m-11,n+62,m-15,n+86);        //larm
		line(m-3,n+81,m-15,n+86); 	  //larm
		ellipse(m,n+78,0,360,2,5);  	  //hand
		pieslice(m,n+118,0,180,24);       //frock
		line(m+3,n+112,m+4,n+150);        //rleg
		line(m-3,n+112,m-4,n+150);        //lleg
		ellipse(m+4,n+152,0,360,3,6);     //rfoot
		ellipse(m-4,n+152,0,360,3,6);     //lfoot
		pieslice(80,30,0,360,20);         //sun
		outtextxy(m-100,n+70,"Texting...");
		outtextxy(m+32,n+60,"CLICK!");
		outtextxy(m+36,n+70,"CLICK!");
		outtextxy(m+40,n+80,"CLICK!");
	}
	for(y=152;y<=600;y+=15)
	{ 		 //boy
		delay(25);                        //falling speed
		cleardevice();
		circle(x+15,y+15,24);  		  //head
		pieslice(x+15,y+15,10,215,24);    //hair
		pieslice(x+15,y+31,235,325,8);    //mouth
		outtextxy(x+25,y+22,"O");         //eye
		outtextxy(x+26,y+21,".");   	  //eye dot
		line(x,y+33,x,y+100);      	  //body
		line(x,y+55,x+15,y+68);   	  //rhand
		line(x+15,y+68,x+31,y+59);   	  //rhand
		line(x,y+55,x+15,y+63);   	  //larm
		line(x+15,y+63,x+31,y+57);	  //larm
		ellipse(x+34,y+57,0,360,4,2);     //hand
		line(x+34,y+56,x+32,y+32);  	  //umbrella stick
		line(x+29,y-1,x+25,y-40);         //umbrella stick
		pieslice(x+30,y-25,10,190,70);    //umbrella
		line(0,b+155,234,b+155);          //lhground
		line(234,b+155,259,b+800);        //lvground
		line(a,b+155,a-83,b+155);         //rhground
		line(a-98,b+155,a-270,b+157);     //rhground
		line(a-270,b+155,a-275,b+600);    //rvground
		line(0,b+160,234,b+155);          //lhground
		line(234,b+155,240,b+600);        //lvground
		line(a,b+148,a-83,b+150);         //rhground
		line(a-98,b+150,a-270,b+149);     //rhground
		line(a-270,b+150,a-260,b+600);    //rvground
		line(x,y+100,(x+15)-i,y+150);     //rleg
		line(x,y+100,(x-15)+i,y+150);     //lleg
		ellipse((x+18)-i,y+152,0,360,6,3);//rfoot
		ellipse((x-12)+i,y+152,0,360,6,3);//lfoot
		outtextxy(x+41,y+40,"DAMN! MOTHAFUCKAAAA!");
			//girl
		circle(m,n+30,23); 	          //head
		arc(m-23,n+5,270,328,28);         //hair
		arc(m+23,n+5,183,270,28);         //hair
		ellipse(m+21,n+42,0,360,1,3);     //earrings
		ellipse(m-21,n+42,0,360,1,3);     //earrings
		ellipse(m+5,n+57,0,360,2,5);      //hair
		ellipse(m+5,n+65,0,360,2,4);      //hair
		ellipse(m+5,n+72,0,360,1,3);      //hair
		line(m-4,n+48,m+4,n+47);          //mouth
		outtextxy(m-11,n+35,"0 0");       //eye
		outtextxy(m-11,n+34,". .");    	  //eye dot
		line(m,n+54,m,n+72);              //body
		line(m,n+82,m,n+110);             //body
		line(m-11,n+62,m+11,n+62);        //shoulder
		line(m+11,n+62,m+15,n+86);        //rarm
		line(m+3,n+81,m+15,n+86);         //rarm
		line(m-11,n+62,m-15,n+86);        //larm
		line(m-3,n+81,m-15,n+86); 	  //larm
		ellipse(m,n+78,0,360,2,5);  	  //hand
		pieslice(m,n+118,0,180,24);       //frock
		line(m+3,n+112,m+4,n+150);        //rleg
		line(m-3,n+112,m-4,n+150);        //lleg
		ellipse(m+4,n+152,0,360,3,6);     //rfoot
		ellipse(m-4,n+152,0,360,3,6);     //lfoot
		pieslice(80,30,0,360,20);         //sun
		outtextxy(m-100,n+70,"Texting...");
		outtextxy(m+32,n+60,"CLICK!");
		outtextxy(m+36,n+70,"CLICK!");
		outtextxy(m+40,n+80,"CLICK!");
	}
	for(k=1;k<=15;k++)
	{
		delay(500);
		cleardevice();
		setcolor(k);
		settextstyle(7,0,5);
		outtextxy(c-280,d-150,"BEAUTIFUL IS DANGEROUS");
		outtextxy(c-270,d-30,"Be careful while walking");
		settextstyle(1,0,4);
		outtextxy(c-80,d+120,"Designed by:");
		outtextxy(c+110,d+160,"Angel Maden");
	}
	for(i=0;i<=30;i++)
	{
		delay(80);
		cleardevice();
		settextstyle(0,0,0);
		circle(m-10,n+30,23);  		  //head
		pieslice(m-9,n+29,145,-374,22);    //hair
		pieslice(m-8,n+30,-75,360,21);    //hair
		ellipse(m+7,n+47,0,360,3,6);     //hair
		ellipse(m+6,n+57,0,360,2,5);     //hair
		ellipse(m+5,n+65,0,360,2,4);     //hair
		ellipse(m+4,n+72,0,360,1,3);     //hair
		pieslice(m-18,n+44,175,210-i,8);    //mouth
		outtextxy(m-25,n+28,"O");         //eye
		outtextxy(m-25,n+25,".");   	  //eye dot
		line(m,n+50,m,n+110);      	  //body
		line(m,n+70,m-14,n+86);   	  //rhand
		line(m-14,n+86,m-30,n+72);   	  //rhand
		line(m,n+66,m-15,n+80);   	  //larm
		line(m-15,n+80,m-29,n+71);	  //larm
		ellipse(m-33,y+69,190,390,5,2);   //hand
		line(m-30,n+68,m-43,n+65);        //phone
		line(m-30,n+70,m-43,n+67);        //phone
		line(m-30,n+68,m-30,n+70);        //phone
		line(m-43,n+65,m-43,n+67);        //phone
		line(0,b+155,230,b+155);          //lhground
		line(234,b+155,259,b+800);        //lvground
		line(a,b+155,a-84,b+155);         //rhground
		line(a-105,b+155,a-270,b+157);    //rhground
		line(a-270,b+155,a-275,b+600);    //rvground
		line(0,b+160,234,b+155);          //lhground
		line(234,b+155,240,b+600);        //lvground
		line(a,b+148,a-84,b+150);         //rhground
		line(a-105,b+150,a-270,b+149);     //rhground
		line(a-270,b+150,a-260,b+600);    //rvground
		pieslice(m,n+118,0,180,25);       //frock
		line(m-3,n+110,m-4,n+151);     //rleg
		line(m+3,n+110,m+2,n+151);     //lleg
		ellipse(m-8,n+152,0,360,6,3);    //rfoot
		ellipse(m,n+152,0,360,6,3);     //lfoot
		pieslice(80,30,0,360,20);         //sun
		outtextxy(m-180,n,"Was someone there?");
	}
		for(m=m;m<=a+30;m+=5)           	  //To walk further increase x
		{
			for(i=0;i<=15;i+=3)    		  //foot length
			{
			delay(60);                        //walking speed
			cleardevice();
			circle(m+12,n+33,23);  		  //head
			pieslice(m+12,n+33,25,240,22);    //hair
			ellipse(m-7,n+47,0,360,3,6);     //hair
			ellipse(m-6,n+57,0,360,2,5);     //hair
			ellipse(m-5,n+65,0,360,2,4);     //hair
			ellipse(m-4,n+72,0,360,1,3);     //hair
			pieslice(m+17,n+48,330,340,8);    //mouth
			settextstyle(0,0,0);
			outtextxy(m+22,n+36,"O");         //eye
			outtextxy(m+23,n+35,".");   	  //eye dot
			line(m,n+49,m,n+110);      	  //body
			line(m,n+70,m+14,n+86);   	  //rhand
			line(m+14,n+86,m+30,n+72);   	  //rhand
			line(m,n+66,m+15,n+80);   	  //larm
			line(m+15,n+80,m+29,n+71);	  //larm
			ellipse(m+33,n+69,190,365,5,2);   //hand
			line(m+30,n+68,m+43,n+65);        //phone
			line(m+30,n+70,m+43,n+67);        //phone
			line(m+30,n+68,m+30,n+70);        //phone
			line(m+43,n+65,m+43,n+67);        //phone
			line(0,b+155,234,b+155);          //lhground
			line(234,b+155,259,b+800);        //lvground
			line(a,b+155,a-270,b+155);        //rhground
			line(a-270,b+155,a-275,b+600);    //rvground
			line(0,b+160,234,b+155);          //lhground
			line(234,b+155,240,b+600);        //lvground
			line(a,b+148,a-270,b+150);        //rhground
			line(a-270,b+150,a-260,b+600);    //rvground
			pieslice(m,n+118,0,180,25);       //frock
			line(m+1,n+110,(m+12)-i,n+150);     //rleg
			line(m-1,n+110,(m-12)+i,n+150);     //lleg
			ellipse((m+16)-i,n+152,0,360,6,3);//rfoot
			ellipse((m-10)+i,n+152,0,360,6,3);//lfoot
			pieslice(80,30,0,360,20);         //sun
			settextstyle(2,0,4);
			outtextxy(m+27,n+52,"Who cares?");
			}
	      }
closegraph();
}
using namespace std;

#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>.h
#include<dos.h>
#include<stdlib.h>

char nm[50],ans;
long int m=5000,ff=1,ea=1,ap=1,g=3;
 /* int:
	 m -money earned
	 ff-50/50 lifeline
	 ea-expert advise lifeline
	 ap-audiance poll lifeline
	 g- for number of lifelines
 */
int ar();  //function for A option Right
int br();  //function for B option Right
int cr();  //function for C option Right
int dr();  //function for D option Right

void LL(int);  //Function For lifelines

void main()
{
clrscr();
int w,x,p[5]={1,1,1,1,1}; //P[5] for 5 checking if the function has been used already

gotoxy(25,20);


cout<<"WELCOME TO 'PARTH' QUIZ CONTEST";
cout<<"\n \t\t\tEnter name: ";
gets(nm);

clrscr();
cout<<"RULES : \n1.Each participant gets RS.5000 for participating \n2.You can choose from 4 major categories that contain 5 questions each!! \n3.Your money gets doubled after answering every question correctly \n4.After answering all the questions of one category correctly,you get a chance to choose another category and play further \n5.You Can't choose the same category twice \n6.To exit the game at any point in the game enter any answer \n7.If you answer a question incorectly you move out of the game and get money that you have earned by the last question \n8.To exit the Game after answering all the questions choose the exit option from category menu \n9.There are 3 LIFELINES \n10.ENTER `L' IN ANSWER POSITION TO USE A LIFELINE\n";
delay(10000);

choose:     //used for goto to choose the category again
clrscr();
cout<<"\nEnter category:\n\n 1:Library Functions \n\n 2:Sports \n\n 3:IT \n\n 4:Celebrities \n\n 5:Exit ";
cin>>w;
clrscr();

switch(w)
{
case 1: 	//LIBRARY FUCTION QUESTIONS
	if(p[1]==1)
	{
	p[1]=0;

	cout<<"\nQ1:The c++ function  `ferror' belongs to library ______?? \nA:stdio.h\t\tB:math.h \nC:conio.h \t\tD:stdlib.h ";
	x=ar();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q2:The c++ function  `mbtowc' belongs to library ______?? \nA:stdio \t\tB:math.h \nC:conio.h \t\tD:stdlib.h ";
	x=dr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q3:The c++ function  `eof' belongs to library ______?? \nA:stdio \t\tB:math.h \nC:iostream.h \t\tD:stdlib.h ";
	x=cr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q4:The c++ function  `vfprintf' belongs to library ______?? \nA:stdio \t\tB:math.h \nC:conio.h \t\tD:stdlib.h ";
	x=ar();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q5:The c++ function  `ldiv' belongs to library ______?? \nA:stdio \t\tB:math.h \nC:conio.h \t\tD:stdlib.h ";
	x=br();
	delay(1000);
	clrscr();
	if(x==0)
	break;
	}

	else
	cout<<"\t\tYou have already taken this choice";

	goto choose;


case 2:	 	 //Sports questions
	if(p[2]==1)
	{
	p[2]=0;
	cout<<"\nQ1:Which famous cyclist was forced to return all his Tour de France tittles because of drugs in cancer medicines?? \nA:Lance Armstrong \t\tB:Jason Anderson \nC:Usain Williams \t\tD:George Hamilton";
	x=ar();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q2:Which legendary footballer broke Gerard Muller's record?? \nA: Cristiano Ronaldo \t\t B:David Bekham \nC:Leo Messi \t\t\t D:Mario Balotelli";
	x=cr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q3:How many centuries has Sachin Ramesh Tendulker scored in ODI cricket?? \nA:99 \t\tB:51 \nC:49 \t\tD:100";
	x=cr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q4:Which team won the hockey Champion's trophy?? \nA:India \t\tB:Australia \nC:Netherlands \t\tD:Germany";
	x=br();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q5: Who was the first Indian to reach the semi final in Wimbledon Tennis Championship??\nA:Sania Mirza \t\tB:Mahesh Bhupatti \nC:Leander Pace \t\tD:Ramanathan Krishnan";
	x=dr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	}

	else
	cout<<"\t\tYou have already taken this choice";

	goto choose;

case 3: 		//INFORMATION TECHNOLOGY QUESTIONS
	if(p[3]==1)
	{
	p[3]=0;

	cout<<"\nQ1:Which IT gaint is behind the scroogle movement?? \nA:Microsoft \t\tB:Apple \nC:Google \t\tD:Wipro";
	x=ar();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q2:When did google first made its first doodle?? \nA:1997 \t\t B:1999 \nC:1998 \t\t D:1995";
	x=cr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q3:Who is the CEO of HCL Technologies?? \nA:Tim Cook \t\t B:Vineet Nayar \nC:William Gates \t D:Narayan Murthi";
	x=br();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q4:What is the name of microsoft's cloud computing?? \nA:Air Storage \t\tB:Sky Drive \nC:Your Cloud \t\tD:Dropbox";
	x=br();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q5: Which city in India is the first to have 4G network??\nA:Mumbai \t\tB:Banglore \nC:Pune \t\t\tD:Kolkatta";
	x=dr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	}

	else
	cout<<"\t\tYou have already taken this choice";

	goto choose;

case 4:   // Celebraties Questions
	if(p[4]==1)
	{
	p[4]=0;

	cout<<"\nQ1.Which bollywood actor recently turned 90??\nA:Amitabh Bachchan \t\tB:Dharmendra \nC:Rishi Kapoor \t\t\tD:Dilip Kumar";
	x=dr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q2: Which bollywood actor recently got married??\nA:Vidya Balan \t\t\tB:Preeti Zinta \nC:Priyanka Chopra \t\tD:Genelia DeSouza";
	x=dr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q3: What is the name of the album released by Priyanka Chopra??\nA:In the night light \t\t\tB:In my City \nC:Thats what happens in Mumbai \t\tD:PC ft Wil I Am";
	x=br();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q4:Which bollywood actor celebrated his b'day on 17th dec 2012??\nA:John Abraham \t\tB:Ranbir Kapoor \nC:Irfan Khan \t\tD:Shahid Kapoor";
	x=ar();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	cout<<"Q5:For which event did the legendary band THE ROLLING STONES reunite??\nA:World Tour \t\t\tB:Best of Music \nC:50 years of ROCK \t\tD:Sandy Relief ";
	x=dr();
	delay(1000);
	clrscr();
	if(x==0)
	break;

	}

	else
	cout<<"\t\tyou have already taken this choice";

	goto choose;

case 5:
	break;

default:
	cout<<"\t \t \tERROR \n \t \t \tINVALID CHOICE ENTRY TRY AGAIN";
	delay(2000);
	goto choose;
}

clrscr();
textattr(7);
cout<<"Congratulations!! Mr./Mrs. ";
puts(nm);
cout<<"  You have won Rs. "<<m<<"\n\n THANKS FOR PARTICIPATING ";

getch();
}




int ar()
{
	int f;
	ans1:
	cout<<"\n\nENTER YOUR ANS ";
	cin>>ans;

	if(ans=='a'||ans=='A')
	{
	m+=m;
	f=1;
	textattr(2);
	cout<<"\nYou have earned RS."<<m;
	}

	else if(ans=='L'||ans=='l')
	{
	LL(1);
	goto ans1;
	}

	else
	{
	f=0;

	delay(1000);


	textattr(8);
	cout<<"\n ANSWER ENTERED BY YOU IS WRONG \n";
	delay(2000);
	clrscr();
	}
	textattr(3);
	return f;
}

int br()
	{
	int f;
	ans2:
	cout<<"\n\nENTER YOUR ANS ";
	cin>>ans;

	if(ans=='b'||ans=='B')
	{
	m+=m;
	f=1;
	textattr(2);
	cout<<"\nYou have earned RS."<<m;
	}

	else if(ans=='L'||ans=='l')
	{
	LL(2);
	goto ans2;
	}

	else
	{
	f=0;

	delay(1500);

	cout<<"ANSWER ENTERED BY YOU IS WRONG \n";
	delay(2000);
	clrscr();
	}
	textattr(3);
	return f;
}

int cr()
	{
	int f;
	ans3:
	cout<<"\n\nENTER YOUR ANS ";
	cin>>ans;

	if(ans=='c'||ans=='C')
	{
	m+=m;
	f=1;
	textattr(2);
	cout<<"\nYou have earned RS."<<m;
	}


	else if(ans=='L'||ans=='l')
	{
	LL(3);
	goto ans3;
	}

	else
	{
	f=0;

	cout<<"\nANSWER ENTERED BY YOU IS WRONG \n";
	delay(2000);
	clrscr();
	}
	textattr(3);
	return f;
	}


int dr()
	{
	int f;
	ans4:
	cout<<"\n\nENTER YOUR ANS ";
	cin>>ans;

	if(ans=='d'||ans=='D')
	{
	m+=m;
	f=1;
	textattr(2);
	cout<<"\nYou have earned RS."<<m;
	}



	else if(ans=='L'||ans=='l')
	{
	LL(4);
	goto ans4;
	}

	else
	{
	textattr(8);
	cout<<"\nANSWER ENTERED BY YOU IS WRONG \n";
	delay(2000);
	clrscr();
	f=0;
	}
	textattr(3);
	return f;
	}

void LL(int d)
{

int c,rn[3],rnm;
char ch[4],ch1;

cout<<"\n \nYOU HAVE "<<g<<" life lines left CHOOSE FROM: \n\n";
(ff==1)?cout<<"1:50-50 \n":cout<<" \n";
(ap==1)?cout<<"2:Audiance Poll \n":cout<<" \n" ;
(ea==1)?cout<<"3:Expert Advice ":cout<<"";
cin>>c;

if (d==1)
ch1='A';
else if(d==2)
ch1='B';
if (d==3)
ch1='C';
else if(d==4)
ch1='D';

random1:
randomize();
rn[0]=random(5);
if(rn[0]==d||rn[0]==0)
goto random1;

if (rn[0]==1)
ch[0]='A';
else if (rn[0]==2)
ch[0]='B';
else if (rn[0]==3)
ch[0]='C';
else if (rn[0]==4)
ch[0]='D';

switch(c)
	{

case 1:
	if(ff==1)
	{
	cout<<"Answer is one of options `"<<ch1<<"' or `"<<ch[0]<<"'";
	ff=0;
	g-=1;
	}

	else
	cout<<"You have already used this lifeline once";

	break;

case 2:
	if(ap==1)
	{


	random2:
	randomize();
	rn[1]=random(5);
	if(rn[1]==d||rn[1]>4||rn==0||rn[1]==rn[0])
	goto random2;

	random3:
	randomize();
	rn[2]=random(5);
	if(rn[2]==d||rn[2]>4||rn[2]==0||rn[2]==rn[0]||rn[2]==rn[1])
	goto random3;

	if (rn[1]==1)
	ch[1]='A';
	else if (rn[1]==2)
	ch[1]='B';
	else if (rn[1]==3)
	ch[1]='C';
	else if (rn[1]==4)
	ch[1]='D';


	if (rn[2]==1)
	ch[2]='A';
	else if (rn[2]==2)
	ch[2]='B';
	else if (rn[2]==3)
	ch[2]='C';
	else if (rn[2]==4)
	ch[2]='D';

	randomize();
	rnm=random(8);

	cout<<"The audiance votes for : \n"<<ch1<<":  "<<rnm+35<<endl<<ch[0]<<":   "<<35-rnm <<endl<<ch[1]<<":    "<<20+rnm<<endl<<ch[2]<<":     "<<10-rnm<<endl;
	ap=0;
	g-=1;
	}

	else
	cout<<"You have already used this lifeline once";

	break;

case 3:
	if(ea==1)
	{
	cout<<"THE ANSWER ACORDING TO OUR EXPERT IS "<<ch1;
	ea=0;
	g-=1;
	}

	else
	cout<<"You have already used this lifeline once";

	break;

default:
	cout<<"WRONG CHOICE";

	}
}

//============================================================================
// Name        : oop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>

using namespace std;

fstream f;

class quiz
{
	public:int enb,ena,eni,edb,eda,edi,sb,sa,si;
	int beginner();
	int intermediate();
	int advanced();
	void education();
	void sports();
	void entertainment();
	void q();
	void result();
	quiz();
};

quiz::quiz()
{
	enb=ena=eni=edb=eda=edi=sb=sa=si=0;
}

void quiz::q()
{
				char x;
				while(!f.eof())
				{
					f.get(x);
					if(x=='#')
						break; 
					else
						cout<<x;
				}
}

int quiz::beginner()
{
				cout<<"\n "<<"\e[36m"<<"YOU HAVE 15 QUESTIONS: "<<"\e[0m"<<endl;
				char ans, ch;
				int m=0;
				for(int i=0;i<10;i++)
				{
					q();
					cout<<"\nENTER ANSWER: ";
					cin>>ans;
					 
					f.get(ch);
					cout<<ch;
					if(ch==ans)
					{
						cout<<"\n "<<"\e[32m"<<"CORRECT"<<"\e[0m";
						m=m+1;
					}
					else
						cout<<"\n "<<"\e[31m"<<"WRONG"<<"\e[0m";
				}
				cout<<"\nYOUR TOTAL SCORE: "<<m;
				cout<<"\e[7;33m"<<"\n\nTHANK YOU!\n\n"<<"\e[0m"; 
				return m;
}

int quiz::intermediate()
{
				cout<<"\n "<<"\e[36m"<<"YOU HAVE 15 QUESTIONS: "<<"\e[0m"<<endl;;
				char ans, ch;
				int m=0;
				for(int i=0;i<10;i++)
				{
					q();
					cout<<"\nENTER ANSWER: ";
					cin>>ans;
					 
					f.get(ch);
					cout<<ch;
					if(ch==ans)
					{
						cout<<"\n "<<"\e[32m"<<"CORRECT"<<"\e[0m";
						m=m+2;
					}
					else
					{
						cout<<"\n "<<"\e[31m"<<"WRONG"<<"\e[0m";
						m--;
					}
				cout<<"\nYOUR TOTAL SCORE: "<<m;				
				}
				cout<<"\e[7;33m"<<"\n\nTHANK YOU!\n\n"<<"\e[0m"; 
						return m;
}

int quiz::advanced()
{
				cout<<"\n "<<"\e[36m"<<"YOU HAVE 15 QUESTIONS: "<<"\e[0m"<<endl;
				char ans, ch;
				int m=0;
				for(int i=0;i<10;i++)
				{
					q();
					cout<<"\nENTER ANSWER: ";
					cin>>ans;
					 
					f.get(ch);
					cout<<ch;
					if(ch==ans)
					{
						cout<<"\n "<<"\e[32m"<<"CORRECT"<<"\e[0m";
						m=m+3;
					}
					else
					{
						cout<<"\n "<<"\e[31m"<<"WRONG"<<"\e[0m";
						break;
					}
					cout<<"\nYOUR TOTAL SCORE: "<<m;	
					cout<<"\e[7;33m"<<"\n\nTHANK YOU!\n\n"<<"\e[0m"; 		
				}
				return m;
}

void quiz::entertainment()
{
			int n;
			do
			{
				cout<<"\nYOU HAVE 3 LEVELS.";
				cout<<"\n 1. BEGINNER";
				cout<<"\n 2. INTERMEDIATE";
				cout<<"\n 3. ADVANCE";
				cout<<"\n PRESS 0 TO CHANGE FIELD ";
				cin>>n;
				switch (n)
				{
					case 1: cout<<"\nYOU HAVE CHOSEN BEGINNER LEVEL.\n";
						cout<<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n ";
						cout<<"1. YOU WILL GET SCORED '+1' ON EVERY CORRECT ANSWER. \n ";
						cout<<"2. ZERO MARKS WILL BE DEDUCTED FOR WRONG ANSWER. \n ";
						cout<<"3. THE GAME WILL TERMINATE AFTER ATTEMPTING ALL QUESTIONS. \n ";
						cout<<"\n\nALL THE BEST!\n ";
							f.open("eb.txt",ios::in);
							enb=beginner();
							f.close(); 
							break;
						 
					case 2: cout<<"\nYOU HAVE CHOSEN INTERMEDIATE LEVEL.\n";
						cout<<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n ";
						cout<<"1. YOU WILL GET SCORED '+2' ON EVERY CORRECT ANSWER. \n ";
						cout<<"2. A DEDUCTION OF '1' MARKS WILL BE DONE FOR EVERY WRONG ANSWER. \n "
						    <<"3. THE GAME WILL TERMINATE AFTER ATTEMPTING ALL QUESTIONS. \n "
						    <<"\n\nALL THE BEST!\n ";
							f.open("ei.txt",ios::in); 
							eni=intermediate();
							f.close();
							break; 
					case 3: cout<<"\nYOU HAVE CHOSEN ADVANCE LEVEL.\n"
						    <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
						    <<"1. YOU WILL GET SCORED '+3' ON EVERY CORRECT ANSWER. \n "
						    <<"2. THE GAME WILL AUTOMATICALLY TERMINATE ON OCCURANCE OF A WRONG ANSWER. \n "
						    <<"\n\nALL THE BEST!\n ";
							f.open("ea.txt",ios::in); 
							ena=advanced();
							f.close();
							break;
						 
				}
			}while(n!=0);
}
	 
void quiz::education()
{
			int n;
			do
			{
						cout<<"\nYOU HAVE 3 LEVELS.";
						cout<<"\n 1. BEGINNER";
						cout<<"\n 2. INTERMEDIATE";
						cout<<"\n 3. ADVANCE";
						cout<<"\n PRESS 0 TO CHANGE FIELD ";
						cin>>n;
				switch (n)
				{
					case 1: cout<<"\nYOU HAVE CHOSEN BEGINNER LEVEL.\n"
						    <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
						    <<"1. YOU WILL GET SCORED '+1' ON EVERY CORRECT ANSWER. \n "
						    <<"2. ZERO MARKS WILL BE DEDUCTED FOR WRONG ANSWER. \n "
						    <<"3. THE GAME WILL TERMINATE AFTER ATTEMPTING ALL QUESTIONS. \n "
						    <<"\n\nALL THE BEST!\n ";
							f.open("edb.txt",ios::in);
							edb=beginner();
							f.close(); 
							break;
						 
					case 2: cout<<"\nYOU HAVE CHOSEN INTERMEDIATE LEVEL.\n"
						    <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
						    <<"1. YOU WILL GET SCORED '+2' ON EVERY CORRECT ANSWER. \n "
						    <<"2. A DEDUCTION OF '1' MARKS WILL BE DONE FOR EVERY WRONG ANSWER. \n "
						    <<"3. THE GAME WILL TERMINATE AFTER ATTEMPTING ALL QUESTIONS. \n "
						    <<"\n\nALL THE BEST!\n ";
							f.open("edi.txt",ios::in); 
							edi=intermediate();
							f.close();
							break; 
					case 3:  cout<<"\nYOU HAVE CHOSEN ADVANCE LEVEL.\n"
						     <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
						     <<"1. YOU WILL GET SCORED '+3' ON EVERY CORRECT ANSWER. \n "
						     <<"2. THE GAME WILL AUTOMATICALLY TERMINATE ON OCCURANCE OF A WRONG ANSWER. \n "
						     <<"\n\nALL THE BEST!\n ";
							f.open("eda.txt",ios::in); 
							eda=advanced();
							f.close();
							break;
						 
				}
			}while(n!=0);
}
	 
void quiz::sports()
{
		int n;
		do
		{
					cout<<"\nYOU HAVE 3 LEVELS.";
					cout<<"\n 1. BEGINNER";
					cout<<"\n 2. INTERMEDIATE";
					cout<<"\n 3. ADVANCE";
					cout<<"\n PRESS 0 TO CHANGE FIELD ";
					cin>>n;
					switch (n)
					{
						case 1: cout<<"\nYOU HAVE CHOSEN BEGINNER LEVEL.\n"
						    	    <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
							    <<"1. YOU WILL GET SCORED '+1' ON EVERY CORRECT ANSWER. \n "
							    <<"2. ZERO MARKS WILL BE DEDUCTED FOR WRONG ANSWER. \n "
							    <<"3. THE GAME WILL TERMINATE AFTER ATTEMPTING ALL QUESTIONS. \n "
							    <<"\n\nALL THE BEST!\n ";
								f.open("sb.txt",ios::in);
								sb=beginner(); 
								f.close();
								break;
							 
						case 2:  cout<<"\nYOU HAVE CHOSEN INTERMEDIATE LEVEL.\n"
						    	    <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
							     <<"1. YOU WILL GET SCORED '+2' ON EVERY CORRECT ANSWER. \n "
							     <<"2. A DEDUCTION OF '1' MARKS WILL BE DONE FOR EVERY WRONG ANSWER. \n "
							     <<"3. THE GAME WILL TERMINATE AFTER ATTEMPTING ALL QUESTIONS. \n "
							     <<"\n\nALL THE BEST!\n ";
								f.open("si.txt",ios::in); 
								si=intermediate();
								f.close();
								break; 
						case 3: cout<<"\nYOU HAVE CHOSEN ADVANCE LEVEL.\n"
						    	    <<"\n"<<"\e[1;37m"<<"RULES:"<<"\e[0m"<<"\n "
							    <<"1. YOU WILL GET SCORED '+3' ON EVERY CORRECT ANSWER. \n "
							    <<"2. THE GAME WILL AUTOMATICALLY TERMINATE ON OCCURANCE OF A WRONG ANSWER. \n "
							    <<"\n\nALL THE BEST!\n ";
								f.open("sa.txt",ios::in); 
								sa=advanced();
								f.close();
								break;
							 
					}
		}while(n!=0);
}	
  
void quiz::result()
{ 
 
        cout<<"\n\n\t\t\t\t"<<"\e[7;35m"<<"\e[1;35m  "<<"  ********** RESUTS **********    \n"<<"\e[0m"<<"\e[0m"<<endl<<endl ;
        cout<<"\n\t\t\t\tBEGINNER"<<"\t\tINTERMEDIATE"<<"\t\tADVANCE";
 	cout<<"\n----------------------------------------------------------------------------------------------";
	cout<<"\n ENTERTAINMENT";
        cout<<"\t\t\t   "<<enb<<"\t\t\t     "<<eni<<"\t\t\t   "<<ena;
        cout<<"\n----------------------------------------------------------------------------------------------";
	cout<<"\n EDUCATION";
        cout<<"\t\t\t   "<<edb<<"\t\t\t     "<<edi<<"\t\t\t   "<<eda;
        cout<<"\n----------------------------------------------------------------------------------------------";
	cout<<"\n SPORTS";
        cout<<"\t\t\t\t   "<<sb<<"\t\t\t     "<<si<<"\t\t\t   "<<sa;
        cout<<"\n----------------------------------------------------------------------------------------------";
	cout<<endl<<endl;
       
       
		
		
}			

int main()
{
cout<<endl<<endl;       
cout<<endl<<endl;       
cout<<setfill('*')<<setw(204)<< "*"<<endl<<setfill('*')<<setw(204)<<"*"<<endl;
cout<<setfill(' ')<<setw(164)<<"  ╔═╗   ╦ ╦  ╦  ╔═╗    ╔═╗  ╔═╗  ╔╦╗  ╔═╗  "<<endl;
cout<<setfill(' ')<<setw(162)<<"  ║═╬╗  ║ ║  ║  ╔═╝    ║ ╦  ╠═╣  ║║║  ║╣   "<<endl;
cout<<setfill(' ')<<setw(164)<<"  ╚═╝╚  ╚═╝  ╩  ╚═╝    ╚═╝  ╩ ╩  ╩ ╩  ╚═╝  "<<endl<<endl;
cout<<setfill('*')<<setw(204)<< "*"<<endl<<setfill('*')<<setw(204)<<"*"<<endl<<endl<<endl;
		quiz w;
		int n;
		do
		{
			cout<<"\nCHOOSE FIELD YOU WISH TO TAKE THE QUIZ IN";
			cout<<"\n"<<"\e[1;34m"<<" 1. ENTERTAINMENT"<<"\e[0m"
			    <<"\n"<<"\e[1;34m"<<" 2. EDUCATION"<<"\e[0m"
			    <<"\n"<<"\e[1;34m"<<" 3. SPORTS"<<"\e[0m"
			    <<"\n"<<"\e[1;34m"<<" 4. RESULT"<<"\e[0m"
		            <<"\n"<<"\e[1;34m"<<"PRESS 0 TO EXIT GAME"<<"\e[0m";
		            cout<<"\nYOUR CHOICE : ";
			cin>>n;
			switch(n)
			{
				case 1: w.entertainment();break;
				case 2: w.education();break;
				case 3: w.sports();break;
				case 4: w.result();break;
				default:cout<<"";
			}
			
		}while(n!=0);
		return 0;
}







//BIG  DOOM  ANSI SHADOW  CALVIN S  DELTA CORPS PRIEST1  BANNER3  DOT MATRIX  JS STICK LETTERS  JERUSALEM  MINI


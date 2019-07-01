#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
void main()
{
	   cout<<"Hello sec C\nWe will graduate in 4 years\n\"Information Technology'C' \" ?\n";
	   cout<<setw(50)<<"This is Turbo C++ Program.\n";
	   cout<<setw(45)<<"It is very easy.\n";
	   cout<<setw(41)<<"I love C++\n";
	   cout<<setw(48)<<"It's high level anguage.\n";
	   cout<<"==============================================================================\n";
	   cout<<"\'A\'is character\n";
	   cout<<"\"Microsoft Visual Studio 2010 Professional\" is String.\n";
	   cout<<"A=\101=\x41\n";
	   cout<<"A="<<(char)65<<"\n";
	   cout<<(char)66<<(char)69<<(char)83<<(char)84<<"\n";
	   cout<<"==============================================================================\n";
	   unsigned short x=65535;
	   cout<<"short = "<<sizeof(x)<<"bytes. "<<x<<"\n";
	   cout<<"==============================================================================\n";
	   cout<< "Display integer constants\n";
	   cout<< "Octal constant    023   is " << 023 << " decimal\n";
	   cout<< "Decimal constant  23    is " << 23 << " decimal\n";
	   cout<< "Hexa constant     0x23  is " << 0x23 << " decimal\n";
	   cout<<"==============================================================================\n";
	   cout << 230.E+3 << "\n" << 230E3 << "\n" << 230000.0 << "\n" << 2.3e5 << "\n" << 0.23e6<< "\n" << .23e+6 <<"\n";
	   cout<<"==============================================================================\n";
	   float f=2.8;
	   int i=120;
	   char c='A';
	   double d=2e5;
	   cout<<"f value is "<<f<<"\n";
	   cout<<"i value is "<<i<<"\n";
	   cout<<"c value is "<<c<<"\n";
	   cout<<"d value is "<<d<<"\n";
	   cout<<"==============================================================================\n";
	   string ID="6206021632050";
	   string Name="Panukul Kampao";
	   int scores1=99,scores2=80;
	   float Gpa=4.00;
	   char Grade='A';
	   //short Age=20;
	   //string Deparment="Information Technology";
	   //string Room="1RC";
	   //cout<<"Student Code : "<<ID<<"\n";
	   cout<<"Student Name : "<<Name<<"\n";
	   cout<<"My scores 1 : "<<scores1<<"\n";
	   cout<<"My scores 2 : "<<scores2<<"\n";
	   cout<<"Total : "<<scores1+scores2<<"\n";
	   //cout<<"Deparment : "<<Deparment<<"\n";
	   //cout<<"Room : "<<Room<<"\n";
	   //cout<<"Age : "<<Age<<"\n";
	   cout<<"Grade : "<<Grade<<"\n";
	   cout<<"Gpa : "<<Gpa<<"\n";
	  // cout<<"==============================================================================\n";
	   /*string user;
	   int age;
	   cout<<"Enter Name : ";
	   cin>>user;
	   cout<<"Enter Age : ";
	   cin>>age;
	   cout<<"\nHello "<<user<<".\n";
	   cout<<"You have "<<age<<" year old.\n";
	   cout<<"You are beginner programmer.\n";
	   cout<<"==============================================================================\n";
	   */
} 
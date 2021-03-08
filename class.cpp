#include <iostream>
#include <string>
#include <string.h>
#include "class.h"
using namespace std;
void lab::SetName(char*ss)
{
		name = ss;
}

void lab::SetNum(int n)
{
	members=n;
}

void lab::ChangeAd(char *ss)
{
		strcpy(address,ss);
}

void lab::InMem(int n)
{
		members+=n;
}

void lab::OutMem(int n)
{
		members -=n;
}

void lab::lab_Display()
{
	std::cout<<"name :"<< name <<endl;
	std::cout<<"members :"<< members <<endl;
	std::cout<<"address :"<< address <<endl;

}

lab::lab(char *n="nishi", int m=10, char *ad ="552-4")
{
		strcpy(name,n); 
		members=m;
		strcpy(address,ad);
}
 



hito::hito(char *n="nishi",int a=40,int s =0){
		strcpy(name,n); age=a;sex=s; 
}

void hito::LabData(char *n, int m ,char *ad)
{
	mlab.SetName(n);
	mlab.SetNum(m);
	mlab.ChangeAd(ad);
}

void hito::hito_Display()
{
	std::cout<<"name :"<< name <<endl;
	std::cout<<"age :"<< age <<endl;
	std::cout<<"sex :"<< sex <<endl;
	std::cout<<"LabData"<<endl;
	mlab.lab_Display();
		
}

void gakusei::grade()
{
	seiseki = 100;
}

int main()
{
	lab westlab;
	hito nishi;
	westlab.lab_Display();
	nishi.hito_Display();
	int n,n1;
	char name[100];
	std ::cout <<"Menbers :";
	std ::cin >>n;
	std ::cout <<"ADD Menmbers?:";
	std ::cin >>n1;
	std ::cout <<"LAB name :";
	std ::cin >>name; 
	westlab.SetNum(n);
	westlab.InMem(n1);
	westlab.SetName(name);
	westlab.lab_Display();
	nishi.hito_Display();





}
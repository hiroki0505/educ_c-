#include <iostream>
#include <string>
class lab{
private:
	char name[40];
	int menbers;
	char address[10];
public:
	void SetName(char *n);
	void SetNum(int n);
	void ChangeAd (char *n);
	void InMem(int n);
	void OutMem(int n);
	lab(char,int,char);
};
void lab::SetName(char*ss)
{
		strcpy(name,ss);
}

void lab::SetNum(int n)
{
	menmbers=n;
}

void ChangeAd(char *ss)
{
		strcpy(address,ss);
}

void InMem(int n)
{
		members+=n;
}

void OutMem(int n)
{
		menmbers -=n;
}

lab::lab(char *n="nishi", int m=10, char ad="552-4"){
		name=n; menmbers=m;address= ad;
}

class hito{
private:
	char name[40];
	int age;
	int sex;
	class lab;
	void AddAge();
public:
	hito(char, int,int);
}


hito::hito(char *n="nishi",int a=40;int s =0){
		strcpy(name *n); age=a;sex=s;
}

class gakusei : public hito{
		string gakubu;
		int gakunen;
		string seiseki;
public:
gakusei():hito();
void seiseki;
}
gakusei;
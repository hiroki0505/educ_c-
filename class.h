#ifndef _CLASS_H_
#define _CLASS_H_
class lab{
private:
	char name[40];
	int members;
	char address[10];
public:
	void SetName(char *n);
	void SetNum(int n);
	void ChangeAd (char *n);
	void InMem(int n);
	void OutMem(int n);
    void lab_Display();
	lab(char *n, int m, char *ad);
};

class hito{
private:
	char name[40];
	int age;
	int sex;
	void AddAge();
    lab mlab;
public:
	hito(char *, int,int);
    void LabData(char *, int ,char *);
    void hito_Display();
};

class gakusei :public hito{
private:
    char gakubu;
	int gakunen;
	int seiseki;
public:
gakusei();
void grade();

};

#endif 
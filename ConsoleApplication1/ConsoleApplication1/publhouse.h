#pragma once
#include <iostream>

using namespace std;
class Instector;
class curator;

class pub_house //����� ������������
{	
	char pubname[17];
	char address[17];
	friend Instector;
	friend curator;
public:

 void setpub();
 void getpub();
 ~pub_house(void); //���������� ������������
};
class Instector
{public:

void iknow(pub_house& y)
{
	
	cout<<"�������� ������������: "<<y.pubname<<endl;
	cout<<"����� ������������: "<<y.address<<endl;
};
};
class curator
{public:
void icanmod(pub_house& any)
{
	 cout<<"������� ����� �������� ������������"<<endl;
	 cin >> any.pubname;
};
};
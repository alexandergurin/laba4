#pragma once
#include <iostream>

using namespace std;
class Instector;
class curator;

class pub_house //класс издательство
{	
	char pubname[17];
	char address[17];
	friend Instector;
	friend curator;
public:

 void setpub();
 void getpub();
 ~pub_house(void); //деструктор издательства
};
class Instector
{public:

void iknow(pub_house& y)
{
	
	cout<<"Ќазвание издательства: "<<y.pubname<<endl;
	cout<<"јдрес издательства: "<<y.address<<endl;
};
};
class curator
{public:
void icanmod(pub_house& any)
{
	 cout<<"¬ведите новое название издательства"<<endl;
	 cin >> any.pubname;
};
};
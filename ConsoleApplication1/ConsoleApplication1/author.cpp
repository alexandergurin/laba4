#include "stdafx.h"
#include "author.h" 
#include <iostream> 
using namespace std;  
author::author(void)
{
}
void  author::author_set()
 {
	  cout<<"Введите пол"<<endl;
	 cin>>sex;
	
 };
void author::author_get() const
{  cout<<"Год рождения: "<<this->year_of_birth<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: "<<this->sex<<endl; 
}  
author::~ author(void)
{
	cout<<"###### Деструктор автора #######"<<endl;
};
#include "stdafx.h"
#include "author.h" 
#include <iostream> 
using namespace std;  
author::author(void)
{
}
void  author::author_set()
 {
	  cout<<"������� ���"<<endl;
	 cin>>sex;
	
 };
void author::author_get() const
{  cout<<"��� ��������: "<<this->year_of_birth<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: "<<this->sex<<endl; 
}  
author::~ author(void)
{
	cout<<"###### ���������� ������ #######"<<endl;
};
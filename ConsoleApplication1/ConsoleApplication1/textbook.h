#pragma once 
#include "book.h"
#include <iostream>
using namespace std;
class textbook/*��� ���������� ������ �������� �����,
������� ��������� ����� ������� ������.
�� ������� ������ �������� �����,
������� ��������� ���� �� ����� ����������� ������. */
{
	char text_name[10];
public:

	class date_in
	{
		
		int year;
	public:

		date_in()
		{
			year=2000;
		}
		void getDate_In()
		{
			cout <<"��� �������: "<<year<<endl;
		}
	};
	textbook()
	{
	cout<<"����������� ��������"<<endl;
		dat=new date_in();
	cout<<"������� �������� ��������"<<endl;
	cin>>text_name;
	}
	void get_textname()
	{
		cout <<"�������� ��������: "<<this->text_name<<endl;
	};
	date_in *dat;

};
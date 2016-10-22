#pragma once 
#include "book.h"
#include <iostream>
using namespace std;
class textbook/*Для вложенного класса допишите метод,
который вывызвает метод внешего класса.
Во внешнем классе допишите метод,
который проверяет одно из полей внутреннего класса. */
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
			cout <<"Год издания: "<<year<<endl;
		}
	};
	textbook()
	{
	cout<<"Конструктор учебника"<<endl;
		dat=new date_in();
	cout<<"Введите название учебника"<<endl;
	cin>>text_name;
	}
	void get_textname()
	{
		cout <<"Название учебника: "<<this->text_name<<endl;
	};
	date_in *dat;

};
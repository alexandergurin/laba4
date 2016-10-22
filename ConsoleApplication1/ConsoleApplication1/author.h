#pragma once
#include "person.h" 
class author://класс автор
	public person
{
	const static int age=48;
	const static int year_of_birth=1891;
	char sex[10];
public:  
	author(void); 
	void author_set();
	void author_get() const;
 ~ author(void);//деструктор автора


};
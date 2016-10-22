#pragma once 
#include "person.h"
#include <iostream> 
using namespace std;
class student :public person
{static int count;
public :
	 student()
	 {
		 count++;

	 };
	 ~student()
	 {
	 count--;

	 };
	 static int getcount()
	 {

		 return count;
	 };
	 void f(){};

};
int student::count=0;
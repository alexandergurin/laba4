#pragma once  
class person 
{  
 char name[10];  
public:  
 person(void);  
 virtual void setname();
 virtual void getname();  
 virtual ~person(void); 
};  
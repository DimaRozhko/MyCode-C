#pragma once
#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>
#include <iostream>

using namespace std;

//An abstract class
class Person{
public:
	Person(){};
	Person(string _f_name, string _l_name, int _age) : age(_age),
    f_name(_f_name), l_name(_l_name){}
	virtual bool Display(bool) = 0;
protected:
	string f_name;//first name
	string l_name;//last name
	int age;
};

#endif // !__PERSON_H__

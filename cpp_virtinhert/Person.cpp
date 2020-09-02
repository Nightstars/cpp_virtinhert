#include "Person.h"
#include <iostream>
using namespace std;
Person::Person(string _color):m_strColor(_color)
{
	cout << "Person::Person(string _name)" << endl;
}

Person::~Person()
{
	cout << "Person::~Person()" << endl;
}

void Person::printColor()
{
	cout << "void Person::printColor()" << endl;
	cout << m_strColor << endl;
}

#include "Farmer.h"
#include <iostream>
using namespace std;
Farmer::Farmer(string _name, string _color):Person("Farmer"+_color),m_strName(_name)
{
	cout << "Farmer::Farmer(string _name, string _color)" << endl;
}

Farmer::~Farmer()
{
	cout << "Farmer::~Farmer()" << endl;
}

void Farmer::sow()
{
	cout << "void Farmer::sow()"<<endl;
	cout << m_strName << endl;
}

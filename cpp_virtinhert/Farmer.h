#pragma once
#include <string>
#include "Person.h"
using namespace std;
class Farmer : virtual public Person
{
public:
	Farmer(string _name = "Jack", string _color = "");
	virtual ~Farmer();
	void sow();
protected:
	string m_strName;
};


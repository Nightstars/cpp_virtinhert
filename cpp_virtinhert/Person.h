#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
public:
	Person(string _color="blue");
	virtual ~Person();
	void printColor();
protected:
	string m_strColor;
};
#endif

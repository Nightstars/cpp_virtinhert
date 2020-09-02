#pragma once
#include "Person.h"
#include <string>
using namespace std;
class Worker :
    virtual public Person
{
public:
    Worker(string _code="001",string _color="blue");
    virtual ~Worker();
    void carry();
protected:
    string m_strCode;
};


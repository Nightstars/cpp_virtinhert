#include "Worker.h"
#include <iostream>
using namespace std;
Worker::Worker(string _code,string _color) :Person("Worker"+_color),m_strCode(_code)
{
	cout << "Worker::Worker(string _code)" << endl;
}

Worker::~Worker()
{
	cout << "Worker::~Worker()" << endl;
}

void Worker::carry()
{
	cout << "void Worker::carry()" << endl;
	cout << m_strCode << endl;
}

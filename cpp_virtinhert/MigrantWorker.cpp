#include "MigrantWorker.h"
#include <iostream>
using namespace std;
MigrantWorker::MigrantWorker(string _name, string _code, string _color):Farmer(_name,_color),Worker(_code,_color)
{
	cout << "MigrantWorker::MigrantWorker(string _name, string _code, string _color)" << endl;
}

MigrantWorker::~MigrantWorker()
{
	cout << "MigrantWorker::~MigrantWorker()" << endl;
}

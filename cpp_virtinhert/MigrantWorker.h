#pragma once
#include "Farmer.h"
#include "Worker.h"
#include <string>
using namespace std;
class MigrantWorker :
    public Farmer,
    public Worker
{
public:
    MigrantWorker(string _name,string _code,string _color);
    virtual ~MigrantWorker();
};


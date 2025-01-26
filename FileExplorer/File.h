#pragma once
#include"String"
#include "Data.h"
using std::string;
class File
{
public:
	string name;
	string extention;
	Data lastModificationDate;
	int size;
};


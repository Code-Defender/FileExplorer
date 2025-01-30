#pragma once
#include"Directory.h"
#include"String"
#include "Data.h"
using std::string;
class Directory
{
public:
	
	string name;
	int size;
	Data lastModificationDate;
	Directory* children;

	Directory(string, int, Data);

};


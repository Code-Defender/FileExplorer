#pragma once

#include"String"
#include "Data.h"
using std::string;
using std::cout;
using std::endl;
class File
{
public:
	string name;
	string extention;
	Data lastModificationDate;
	int size;
	File(string, string, Data, int);
	void SetName(string);
	void SetExtension(string);
	void SetLMD(const Data&);
	void SetSize(int);
	string GetName();
	string GetExtension();
	int GetSize();
	Data GetModificationDate();

	
	void Display();


     



};


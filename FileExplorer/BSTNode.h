#pragma once
#include"Directory.h"
#include"String"
#include "Data.h"
using std::string;
class BSTNode
{
public:
	Directory* Data;
	BSTNode* left;
	BSTNode* right;

	BSTNode(Directory* dir);
};


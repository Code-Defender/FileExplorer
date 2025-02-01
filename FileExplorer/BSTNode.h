#pragma once
#include"Directory.h"
#include"string"
#include "Data.h"
using std::string;

class Directory;

class BSTNode
{
public:
	Directory* Data;
	BSTNode* left;
	BSTNode* right;

	BSTNode(Directory* dir);
};


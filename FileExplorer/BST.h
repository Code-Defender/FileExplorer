#pragma once
#include"BSTNode.h"

class BST
{
public:
	BSTNode* Root;
	BST();
	void InsertDirectory(Directory* NewDir);
	void Search(BSTNode* , string);
	void InOrder(BSTNode*);
	void Display();
};


#pragma once
#include"Directory.h"
#include"string"
#include"BSTNode.h"
#include "Data.h"
#include"File.h"
using std::string;

struct FileNode
{
	File* file;
	FileNode* next;
	FileNode(File*);
};





class Directory
{
public:
	
	FileNode* fileHead;

	string name;
	int size;
	Data lastModificationDate;
	Directory* children;

	Directory(string, int, Data);
	
	void AddFile(File* newFile);
	bool RemoveFile(string fileName);
	void DisplayFiles();

	
	











};

#include<iostream>
#include"BST.h"
#include"Data.h"
#include"Directory.h"
using namespace std;

int main() {
	BST DirectoryTree;

	Data date(30, 1, 2024);
	Data date1(23, 1, 2024);
	Data date2(12, 1, 2024);
	Directory objDir("Documents", 100, date);
	Directory objDir1("Documents", 100, date1);
	Directory objDir2("Documents", 100, date2);
	DirectoryTree.InsertDirectory(&objDir);
	DirectoryTree.InsertDirectory(&objDir1);
	DirectoryTree.InsertDirectory(&objDir2);
	DirectoryTree.Display();




} 
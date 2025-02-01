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
	Directory objDir1("Photos", 200, date1);
	Directory objDir2("videos", 300, date2);
	DirectoryTree.InsertDirectory(&objDir);
	DirectoryTree.InsertDirectory(&objDir1);
	DirectoryTree.InsertDirectory(&objDir2);

	File file1("Resume", "pdf", Data(30, 1, 2024), 50);
	File file2("Budget", "xlsx", Data(28, 1, 2024), 200);
	File file3("Wedding", "jpg", Data(22, 1, 2024), 100);
	File file4("Video", "mp4", Data(12, 1, 2024), 500);

	// Add files to the directories
	objDir.AddFile(&file1);
	objDir.AddFile(&file2);
	objDir1.AddFile(&file3);
	objDir2.AddFile(&file4);

	// Display the directories and their files
	cout << "Directory Tree after adding files:" << endl;
	DirectoryTree.Display();  // Assuming this function will display the tree and the files in it
    
	objDir.DisplayFiles();
	objDir.DisplayFiles();
	objDir1.DisplayFiles();
	objDir2.DisplayFiles();

	DirectoryTree.Search(DirectoryTree.Root, "videos");
	




} 
#include "BST.h"
#include<iostream>
using std::cout;
using std::endl;


BST::BST()
{
	Root = nullptr;
}

void BST::InsertDirectory(Directory* NewDir)
{
	BSTNode* newDir = new BSTNode(NewDir);

	if (!Root) {     // if the directory is empty it add the dirtory to start
		Root = newDir;
		return;
	}

	BSTNode* temp = Root; //temp point to starting Dir
	while (true) {

		if (NewDir->name > temp->Data->name && !(temp->right)) {// check for directory is greater than prev and also ensure that dirtory add to the last
			temp->right = newDir;
			return;
		}
		else if (NewDir->name > temp->Data->name) {
			temp = temp->right;
		}
		else if (NewDir->name <= temp->Data->name && !(temp->left)) {
			temp->left = newDir;
			return;
		}
		else {
			temp = temp->left;
		}


	}



}

void BST::Search(BSTNode* checker , string keyname)
{
	if (checker == nullptr) {
		cout << "Directory Not found in the tree\n";
		return;
	} 

	if (keyname == checker->Data->name) {
		cout << "Directory is Present in the Tree\n";
	}
	else if (keyname > checker->Data->name) {
		 Search(checker->right, keyname);
	}
	else {
		Search(checker->left, keyname);
	}

}

void BST::InOrder(BSTNode* check)
{
	if (check == nullptr) return;
	InOrder(check->left);
	cout << "Directory Name = " << check->Data->name<<endl;
	cout << "Directory size = " << check->Data->size<<endl;
	cout << "Last Modification Date = ";
	check->Data->lastModificationDate.Display();
	cout << endl<<endl;
		InOrder(check->right);

}

void BST::Display()
{
	if (!Root) {
		cout << "No Directory present in BST\n";
		return;
	}
	InOrder(Root);
	

}

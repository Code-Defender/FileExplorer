#include "Directory.h"
FileNode::FileNode(File* file)
{
    this->file = file;
    next = nullptr;


}


Directory::Directory(string name, int size, Data date)
{
    this->name = name;
    this->size = size;
    this->lastModificationDate = date;
    children = nullptr;
    fileHead = nullptr;
  
}

void Directory::AddFile(File* newFile)
{
    FileNode* newNode = new FileNode(newFile);
    newNode->next = fileHead;
    fileHead = newNode;
    size += newFile->GetSize();
    lastModificationDate = newFile->GetModificationDate();

}

bool Directory::RemoveFile(string fileName)
{
    FileNode* temp = fileHead;
    FileNode* parent = nullptr;
    if (!temp) {
       
        return false;
    }
    else {
        while (temp != nullptr) {
          
            if (temp->file->GetName() == fileName) {
                if (parent == nullptr) {
                    fileHead = temp->next;
                }
                else {
                    parent->next = temp->next;
                }
                size -= temp->file->GetSize();
                delete temp->file;
                delete temp;
                return true;
            }
          
          
            parent = temp;
            temp = temp->next;
        }
    }
    return false;
}


void Directory::DisplayFiles()
{
    FileNode* temp = fileHead;
    while (temp != nullptr) {
        temp->file->Display();

        temp = temp->next;
    }
 

}





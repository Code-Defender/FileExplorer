#include "File.h"

File::File(string name, string extension, Data date, int size)
{
    SetName(name);
    SetExtension(extension);
    SetLMD(date);
    SetSize(size);


}

void File::SetName(string name)
{
	this->name = name;
}

void File::SetExtension(string extension)
{
	this->extention = extension;
}

void File::SetLMD(const Data& lastmodificationdate)
{
    this->lastModificationDate = lastmodificationdate;

}

void File::SetSize(int size)
{
    this->size = size;
}


string File::GetName() {
    return name;
}

string File::GetExtension() {
    return extention;
}

int File::GetSize() {
    return size;
}

Data File::GetModificationDate() {
    return lastModificationDate;
}

// Display function
void File::Display() {
    cout << "File Name: " << name << "." << extention << endl;
    cout << "Size: " << size << " KB" << endl;
    cout << "Last Modified: ";
    lastModificationDate.Display();
    cout << endl<<endl;
}
#include "Directory.h"



Directory::Directory(string name, int size, Data date)
{
    this->name = name;
    this->size = size;
    this->lastModificationDate = date;
    children = nullptr;
}




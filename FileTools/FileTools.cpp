#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h>
#include <errno.h>
#include "tools.h"
using namespace std;

int main()
{
    string fileName = "example.txt";

    if (createFile(fileName))
    {
        renameFile(fileName, "newExample.txt");
    }
    //int result = deleteFile("example.txt");
}


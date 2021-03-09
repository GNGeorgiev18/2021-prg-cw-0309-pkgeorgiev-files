#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h>
#include <errno.h>
#include "tools.h"
using namespace std;

bool doesFileExist(string fileName)
{
	ifstream file;

	file.open(fileName, ios::in | ios::_Nocreate);

	if (file.is_open())
	{
		file.close();
		return true;
	}

	return false;
}

bool createFile(string fileName)
{
	ofstream file;

	file.open(fileName, ios::out | ios::trunc);

	if (file.is_open())
	{
		file.close();
		return true;
	}

	return false;
}

int deleteFile(std::string fileName)
{
	int result = remove(fileName.c_str());

	if (result != 0)
	{
		return errno;
	}

	return 0;
}

int renameFile(std::string oldFileName, std::string newFileName)
{
	int result = rename(oldFileName.c_str(), newFileName.c_str());

	if (result != 0)
	{
		return errno;
	}

	return 0;
}
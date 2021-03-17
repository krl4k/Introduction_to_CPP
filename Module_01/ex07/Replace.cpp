//
// Created by Foster Grisella on 3/17/21.
//

#include "Replace.h"
Replace::Replace(const std::string &fileName) {
	if (fileName.empty())
	{
		std::cout << "Wrong fileName!" << std::endl;
		return;
	}
	_fileName = fileName;
}



void Replace::doReplace(const std::string &s1, const std::string &s2) {
	std::ifstream fileIn(_fileName, std::ios::in);
	if (!fileIn.is_open())
	{
		std::cerr << "Uh oh, " << "\"" << _fileName << "\"" << " could not be opened for reading!" << std::endl;
		exit(1);
	}
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Uh oh, ";
		std::cerr << "is empty line" << std::endl;
		fileIn.close();
		exit(1);
	}
	getText(fileIn);
	fileIn.close();
	replaceText();

	std::ofstream fileOut(_fileName, std::ios::out);
	if (!fileOut.is_open())
	{
		std::cerr << "Uh oh, " << _fileName << " could not be opened for reading!" << std::endl;
		exit(1);
	}
	setText(fileOut);
	fileOut.close();
}

void Replace::getText(std::ifstream &fileName) {
	std::string temp;
	while (std::getline(fileName, temp))
	{
		_fileData.append(temp);
		_fileData.append("\n");
	}
}

void Replace::replaceText() {
	size_t  index = 0;
	while (true)
	{
		index = _fileData.find(_s1, index);
		if (index == std::string::npos)
			break;
		_fileData.replace(index, 3, _s2);
		index += _s1.length();
	}
}

void Replace::setText(std::ofstream &ofstream) {
	ofstream << _fileData;
}

#include <string>
#include <iostream>
#include <fstream>
#include <ostream>

void getText(std::string &_fileData, std::ifstream &fileName) {
	std::string temp;
	while (std::getline(fileName, temp))
	{
		_fileData.append(temp);
		_fileData.append("\n");
	}
}

void setText(std::string &_fileData, std::ofstream &file) {
	file << _fileData;
}

void replaceText(std::string &string, const std::string &s1, const std::string &s2)
{
	size_t  index = 0;
	while (true)
	{
		index = string.find(s1, index);
		if (index == std::string::npos)
			break;
		string.replace(index, s1.length(), s2);
		index += s2.length();
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fileName = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string fileText;

		std::ifstream fileIn(fileName, std::ios::in);
		if (!fileIn.is_open())
		{
			std::cerr << "Uh oh, " << "\"" << fileName << "\"" << " could not be opened for reading!" << std::endl;
			exit(1);
		}
		if (s1.empty() || s2.empty())
		{
			std::cerr << "Uh oh, ";
			std::cerr << "is empty line" << std::endl;
			fileIn.close();
			exit(1);
		}
		getText(fileText, fileIn);
		replaceText(fileText, s1, s2);
		std::ofstream fileOut(fileName, std::ios::out);
		if (!fileOut.is_open())
		{
			std::cerr << "Uh oh, " << "\"" << fileName << "\"" << " could not be opened for reading!" << std::endl;
			exit(1);
		}
		setText(fileText, fileOut);
		fileOut.close();
	}
	else
	{
		std::cout << "Wrong count argument!" << std::endl;
	}
}
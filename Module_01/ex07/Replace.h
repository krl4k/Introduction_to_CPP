//
// Created by Foster Grisella on 3/17/21.
//

#ifndef REPLACE_H
#define REPLACE_H
#include <string>
#include <fstream>
#include <iostream>


/*!
 * replacing every occurence of s1 with s2.
 */
class Replace {
private:
	std::string		_fileName;
	std::string		_fileData;
	std::string		_s1;
	std::string		_s2;

public:
	explicit Replace(const std::string &fileName);

	void getText(std::ifstream &fileName);

	void doReplace(const std::string &s1, const std::string &s2);

	void setText(std::ofstream &ofstream);
	void replaceText();
};


#endif

#include <iostream>

void megaphone(char **string, int countStrings)
{
	char	c;
	for (int i = 1; i < countStrings; ++i) {
		for (int j = 0; string[i][j]; ++j) {
			c = std::toupper(string[i][j]);
			std::cout << c;
		}
		std::cout << " ";
	}
	std::cout << "" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		megaphone(argv, argc);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
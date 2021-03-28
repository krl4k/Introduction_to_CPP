// CLion
// Created by Foster Grisella on 3/26/21 11:13.
//


#include <iostream>
#include <string>

struct Data{
	std::string	string1;
	int num;
	std::string	string2;
};

void * serialize(void)
{
	/*Data *serObj = new Data;//если сериализовать сразу в объект то можно сразу его получить
	serObj->string1 = "lol";
	serObj->num = 22;
	serObj->string2 = "123";
	*/
	char *serObj = new char[20];
	*reinterpret_cast<int *>(&serObj[8]) = rand() % 20;
	for (int i = 0, j = 12; i < 7 && j < 19; ++i, ++j) {
		serObj[i] = rand() % 26 + 65;
		serObj[j] = rand() % 26 + 65;
	}
	serObj[7] = '\0';
	serObj[19] = '\0';
	std::cout << "serialize" << std::endl;
	std::cout << "str1 = " << reinterpret_cast<char *>(&serObj[0]) << std::endl;
	std::cout << "str2 = " << reinterpret_cast<char *>(&serObj[12]) << std::endl;
	std::cout << "num = " << *reinterpret_cast<int *>(&serObj[8]) << std::endl;
	return static_cast<void *>(serObj);
}

Data * deserialize(void * raw){

//	Data *data = reinterpret_cast<Data *>(raw);
	Data *data = new Data;
	data->string1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->string2 = std::string(&reinterpret_cast<char *>(raw)[12], 8);
	data->num = *reinterpret_cast<int *>(static_cast<char *>(raw)+8);
//	data->num = reinterpret_cast<int>(&raw[8]);//нельзя!
	return data;
}

int main() {
	srand(time(0));
	void *d = serialize();
	Data *data = deserialize(d);

	std::cout << "deserilize" << std::endl;
	std::cout << data->string1 << std::endl;
	std::cout << data->num << std::endl;
	std::cout << data->string2 << std::endl;

}

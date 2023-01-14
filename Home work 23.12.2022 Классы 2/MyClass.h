#pragma once
#include <string>
#include <vector>

class Name {
public:
	Name();
	Name(std::string names);
	Name(int num);
	~Name();
	const std::string& operator[](int index);
	const int getNum()const;
private:
	int _num;
	std::string _names;
	std::vector<std::string> _surname;
};



class MyClass
{
public:
	MyClass( unsigned int indexUser);
	~MyClass();
	void setIndexArr(unsigned int indexUser);
	int getIndexArr();

private:
	unsigned int _index{};
	int* _arr{};// указатель на область памяти, где хранятся элементы массива

};


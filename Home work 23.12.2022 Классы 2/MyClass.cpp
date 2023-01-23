#include "MyClass.h"
#include <iostream>

//ƒва способа создать конструктор по умолчанию
Name::Name(){}

Name::Name(std::string names): _names(nullptr){}

Name::Name(int num) : _num(num) {}


//—пособ удалить конструктор по умолчанию
Name::~Name(){}

//ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€ std::string по индексу
const std::string& Name::operator[](int index) {
	return _surname[index];
}
//ќбъ€вление и определение константного метода
const int Name::getNum()const {
	return _num;
}

MyClass::MyClass( unsigned int indexUser)        //конструктор принимает размер массива, который будет установлен пользователем(кол-во элементов)
{
	_index = indexUser;
	_arr = new int[indexUser];
}  

MyClass::~MyClass() {         //конструктор удалени€ динамического массива
		delete[] _arr;          //удал€ем массив
		_arr = 0;
	}
void MyClass::setIndexArr(unsigned int indexUser) {  //сеттер дл€ index устанавливает новое значение
		_index = indexUser;
	}
	
	int MyClass::getIndexArr() {                //геттер дл€ index возвращает поле класса
		return _index;
	}
	                
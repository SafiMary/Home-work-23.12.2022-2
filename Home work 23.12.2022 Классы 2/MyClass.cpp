#include "MyClass.h"
#include <iostream>

//��� ������� ������� ����������� �� ���������
Name::Name(){}

Name::Name(std::string names): _names(nullptr){}

Name::Name(int num) : _num(num) {}


//������ ������� ����������� �� ���������
Name::~Name(){}

//���������� � ����������� ��� operator[] ��� ������� � ��������� ���� std::string �� �������
const std::string& Name::operator[](int index) {
	return _surname[index];
}
//���������� � ����������� ������������ ������
const int Name::getNum()const {
	return _num;
}

MyClass::MyClass( unsigned int indexUser)        //����������� ��������� ������ �������, ������� ����� ���������� �������������(���-�� ���������)
{
	_index = indexUser;
	_arr = new int[indexUser];
}  

MyClass::~MyClass() {         //����������� �������� ������������� �������
		delete[] _arr;          //������� ������
		_arr = 0;
	}
void MyClass::setIndexArr(unsigned int indexUser) {  //������ ��� index ������������� ����� ��������
		_index = indexUser;
	}
	
	int MyClass::getIndexArr() {                //������ ��� index ���������� ���� ������
		return _index;
	}
	                
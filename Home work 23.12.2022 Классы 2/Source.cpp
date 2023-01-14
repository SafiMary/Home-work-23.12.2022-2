#include <iostream>
#include <windows.h>
#include "MyClass.h"
#include <string>
#include <vector>





int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyClass b(8); //создали массив с 8 элементами
	std::cout << b.getIndexArr() << std::endl;
	b.setIndexArr(5);
	std::cout << b.getIndexArr() << std::endl;

	Name a(89);
	std::cout << a.getNum();

	
}
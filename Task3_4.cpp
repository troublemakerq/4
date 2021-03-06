#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

const int MAX_LEN = 80;

int main()
{
	//подключаем кириллицу
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "Задача №3:" << endl;
	char str[MAX_LEN]; //строка из 80 символов 
	bool latin = false; //есть ли в строке латинская буква 

	cout << "Введите строку: ";
	cin.getline(str, MAX_LEN); //считываем строку из клавиатуры

	for (int i = 0; i < strlen(str); ++i) //проходим циклом по всей строке 
	{
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z')) //найдена латинская буква
		{
			latin = true; //латинская буква найдена
			break; //прерываем цикл
		}
	}

	if (latin == true) //если латинская буква была найдена
	{
		cout << "В строке есть хотя бы одна латинская буква" << endl;
	}
	else //иначе
	{
		cout << "В строке отсутствуют латинские буквы" << endl;
	}


	cout << "\nЗадача №4:" << endl;

	cout << "Введите строку: ";
	cin.getline(str, MAX_LEN); //считываем строку из клавиатуры

	cout << "Строка до обработки: " << str << endl; //выводим исходную строку 

	char *newStr = new char[strlen(str) * 2 + 1]; //создаем новую динамическую строку, длина которой больше в 2 раза + 1 (символ окончания строки \0)

	int i = 0; //счетчик цикла 
	for (i = 0; i < strlen(str); ++i) //проходим по исходной строке 
	{
		newStr[i * 2] = str[i]; //записываем в новую строку исходный символ
		newStr[i * 2 + 1] = ' '; //ставим после него пробел 
	}
	newStr[i * 2] = '\0'; //добавляем в конец строки символ окончания строки

	cout << "Строка после обработки: " << newStr << endl; //выводим строку после обработки

	delete newStr; //освобождаем динамическую память

	system("pause"); //пауза
	return 0;
}



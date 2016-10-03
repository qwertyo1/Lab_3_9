#include "stdafx.h"

string askUserFileName()
{
	fstream file; // файл
	string fileName; // имя файла

	cout << "Введите название файла (без .txt): ";
	cin >> fileName;

	file.open(fileName + ".txt");
	if (!file.is_open()) {
		cout << "Ошибка при открытии файла\n";
		askUserFileName();
	}
	file.close();
	return fileName;
}
#include "stdafx.h"

ifstream pses::openFileToRead(string filename)
{
	ifstream file;
	if (filename == "") {
		this->filename = askUserFileName();
	}
	else
	{
		this->filename = filename;
	}
	file.open(this->filename + ".txt");
	return file;
}

ofstream pses::openFileToWrite(string filename)
{
	ofstream file;
	file.open(filename + ".dat");
	return file;
}

void pses::txtToDat()
{
	ofstream file;
	file.open(filename + ".dat");
	file.close();
}

void pses::Exclusive()
{
	ifstream fileR = openFileToRead("");
	ofstream fileW = openFileToWrite(filename);
	txtToDat();
	char symbol;
	int key;
	cout << "”кажите ключ дл€ побитого исключающего или: ";
	cin >> key;
	while (!fileR.eof()) {
		fileR >> symbol;
		symbol = (int)symbol ^ key;
		fileW << symbol;
	}
	fileR.close();
	fileW.close();
}
#include "stdafx.h"

string askUserFileName()
{
	fstream file; // ����
	string fileName; // ��� �����

	cout << "������� �������� ����� (��� .txt): ";
	cin >> fileName;

	file.open(fileName + ".txt");
	if (!file.is_open()) {
		cout << "������ ��� �������� �����\n";
		askUserFileName();
	}
	file.close();
	return fileName;
}
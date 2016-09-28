#include "stdafx.h"

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Укажите количество строк в таблице: ";
	int n;
	cin >> n;
	pses *projects = new pses[n];
	for (int i = 0; i < n; i++) {
		cout << "  [" << i << "] Год: ";
		int year = 0;
		cin >> year;
		cout << "  [" << i << "] Научный руководитель: ";
		char* adviser = new char;
		cin >> adviser;
		cout << "  [" << i << "] Диаметр антенны (м): ";
		int dia = 0;
		cin >> dia;
		cout << "  [" << i << "] Рабочая частота (МГц): ";
		int clockRate = 0;
		cin >> clockRate;
		projects[i].setData(year, adviser, dia, clockRate);
	}
	cout << " |  Год  |  Научный руководитель  |  Диаметр антенны (м)  |  Рабочая частота (МГц)  | " << endl;
	for (int i = 0; i < n; i++) {
		projects[i].showData();
	}
	int nn = 0;
	cout << "Укажите номер строки, с которой желаете получить данные: ";
	cin >> nn;
	cout << "Год: " << projects[nn].getYear() << endl << "Научный руководитель: " << projects[nn].getAdviser() << endl << "Диаметр антенны (м): " << projects[nn].getDia() << endl << "Рабочая частота (МГц): " << projects[nn].getClockRate() << endl;
	system("pause");
	delete[]projects;
	return 0;
}


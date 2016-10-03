#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

string askUserFileName();

class pses {
private:
	string filename;
public:
	ifstream openFileToRead(string filename);
	ofstream openFileToWrite(string filename);
	void txtToDat();
	void Exclusive();
};
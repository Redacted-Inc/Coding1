#pragma once			//says please only compile stuff in here once
#include <iostream>
#include <string>
#include <fstream>	//includes FILE stream		//can use ifstream for reading only and ofstream for writing only
#include <sstream>
#include <vector>
using namespace std;

void readFromFile();
void writeToFile();
void writeArrayToFile(string* arr, int index);

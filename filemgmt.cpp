#include "filemgmt.h"
using namespace std;

void readFromFile() {
	string fileContents;						//this string will hold what the file contains

	ifstream file("file.txt");					//opens the file

	while (getline(file, fileContents)) {		//for reach line in the file, add it to the string
		cout << fileContents << "\n";
	}

	file.close();								//closes file so other programs can use it
}

void writeToFile() {
	ofstream file("file.txt");

	file << "Play Ocarina of Time\n";

	file.close();
}



void writeArrayToFile(string* arr, int index) {
	ofstream file("faves.txt");					//opens and/or creates "faves.txt"

	if (!file.is_open()) {						//won't try to write to a file that isn't open
		return;
	}

	for (int i = 0; i < index; i++) {
		file << arr[i] << "\n";
	}

	file.close();
}

/*void readArrayFromFile(string* arr, int index) {						//DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS 
												//DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS
												//DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS
	ofstream file("faves.txt");

	if (!file.is_open()) {						//won't try to write to a file that isn't open
		return;
	}

	for (int i = 0; i < index; i++) {
		arr[i] = file;
	}

	file.close();
}*/

//csv files allow me to send a string of info (ex: hi,my,name,is) to a txt file, which, if the file is converted to a csv file it can be opened in excel with eaech value being
//different cell (hi	my	  name	  is)
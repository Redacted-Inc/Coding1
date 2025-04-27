#include "filemgmt.h"
#include "Item.h"
using namespace std;

void readArrayFromFile() {						//DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS 
												//DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS
												//DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS DO THIS
}

//csv files allow me to send a string of info (ex: hi,my,name,is) to a txt file, which, if the file is converted to a csv file it can be opened in excel with eaech value being
//different cell (hi	my	  name	  is)





int main() {
	cout << "Hi :3\n";

	readFromFile();
	writeToFile();

	item();

	string faves[100];
	int nextIndex = 0;

	cout << "Tell me your favorite things, one at a time please :3 (type 'done' if you are ready to stop)\n";
	while (true) {
		string input;
		cout << ">> ";
		getline(cin, input);

		if (input == "done") {
			break;
		}

		faves[nextIndex] = input;
		nextIndex++;
	}

	writeArrayToFile(faves, nextIndex);
}
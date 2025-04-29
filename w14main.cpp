#include "filemgmt.h"
#include "Item.h"
using namespace std;

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

	readFromFile();
}
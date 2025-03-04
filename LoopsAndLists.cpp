//Brennan Dumler Coding 1 Feb 25 25

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Array: ordered list of single type of variable

	//Arrray of integeres with a size of ten
	const int MAX_SIZE = 10;	//Constant, can't be changed, use ALL CAPS FOR CONSTANT VARIABLE NAME
	int element = 0;			//Will be used to track where in the array we are
	int scores[MAX_SIZE];		//Created array with slots 0-9 (10 slots) for integers (currenly undefined)

	scores[0] = 9001;			//adds value to first element of the array

	//Index = location in array (slot 0, 1, 2, etc.) and element equals value of that slot (9001, 682, 604, etc.)

	cout << "The highest score in scores is " << scores[0] << ".\n";

	element = 1;
	scores[element++] = 682;	//The ++ adds 1 to element AFTER adding 682 to score (++element would do the other way)
	scores[element++] = 604;
	scores[element++] = 412;

	cout << "The second score in scores is " << scores[1] << ".\n\n";

	//Print all the scores in while loop

	int counter = 0;

	while (counter < element) {
		cout << "the score in slot " << counter << " is " << scores[counter] << ".\n";
		counter += 1;
	}

	//Array of strings named bestFriends
		//Have user input names or quit (use do while loop)
		//Display all names

	string bestFriends[20];
	int friendCount = 0;
	string input;

	do {
		cout << "\nWe're making a list of Best Friends, who would you like to add?\n";
		cout << "or type 'quit' to quit.\n";

		cin >> input;

		if (input == "quit") {	//Add your fail cases FIRST
			cout << "\nThanks for adding to the list!\n";
			break;
		}
		if (friendCount >= 19) {
			cout << "\nSorry! There's no more room for more Best Friends\n";
			break;
		}

		bestFriends[friendCount++] = input;
		
	} while (true);

	/*int count = 0;
	cout << "\nHere is a list of your best friends:\n";
	while (count < friendCount) {
		cout << bestFriends[count] << "\n";
		count += 1;
	}*/	
	
	//Now do this but with a for loop

	//for(setup; test; action) { code }

	cout << "\nHere is a list of your best friends:\n";
	for (int i = 0; i < friendCount; i++) {
		cout << "    " << i + 1 << ".\t";
		cout << bestFriends[i] << "\n";
	}
}

//if(i + 1 == namecount) Then name not found to find the end of a list
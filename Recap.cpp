#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	bool debug = true;	//DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE 
						//DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE 
						//DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE 
						//DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE DEBUG MODE 

	string input;
	
	cout << "Do you prefer Cheese or Pepperoni Pizza?\n>> ";
	getline(cin, input);

	if (input == "Cheese") {
		cout << input << " Pizza? I like that too!\n\n";
	}
	else if (input == "Pepperoni") {
		cout << input << "? Isn't that a bit greasy?\n\n";
	}
	else {
		cout << input << "? What the hell is " << input << "? I think you need to sort some things out man...\n\n";
	}

	int number = 0;
	int guess = 0;
	srand(time(0));
	number = (rand() % 10) + 1;
	
	do {
		if (debug) {
			cout << "The number is: " << number << "\n";
		}
		
		cout << "Guess a number from 1 to 10 (inclusive)\n>> ";
		//cin >> guess;
		getline(cin, input);

		/*if (guess == number) {
			cout << "You did it!";
			break;
		}
		else if (guess < number) {
			cout << "Your guess is too low :(\n";
		}
		else if (guess > number) {
			cout << "Your guess is too high :(\n";
		}
		else {
			cout << "Huh!?";
		}*/

		if (input == "quit" || input == "Quit" || input == "QUIT") {	//Break out of guessing
			break;
		}

		try {															//Catches non numbers
			guess = stoi(input);
		}
		catch (invalid_argument) {
			cout << "Huh!?\n";
			continue;
		}

		if (guess == number) {
			cout << "You did it!";
			break;
		}
		else if (guess < number) {
			cout << "Your guess is too low :(\n";
		}
		else {
			cout << "Your guess is too high :(\n";
		}
	} while (true);
}

//if(stoi(input) == the Number)
//converts string to integer

/*try {
	guess = stoi(input);
}
catch (invalid_argument) {
	cout << "That's not a number\n";
}*/
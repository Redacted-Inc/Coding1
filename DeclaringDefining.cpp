#include <iostream>
#include <string>
using namespace std;

//This function returns *nothing* (hence, void)
//The name is "sayHello()" WITH THE PARENTHESES
//Function declared *before* it is used
	//Either have full function written out before int main(), or declare it above, then define it below int main()
void sayHello() {
	cout << "Hi! :3\n\n";
}

void sayGoodbye() {
	cout << "Byyyeeeee\n";
}


//Parameters inside parentheses
//These are the input for out functions [when I call add(23, 2) it will put 23 in the spot on number1 and 2 in the spot of number 2]
//Optionally I can predefine an input in case it doesn't get defined when called  [That's the = 2 after number1]
//If only one input is defined [ex: add(23)] then the 23 will be put in the first input slot [number1]
void add(int number1 = 2, int number2 = 5) {
	cout << "The sum on number1 and number2 is equal to " << number1 + number2 << "\n\n";
}
//WE CAN MAKE ANOTHER ADD FUNCTION WITH DIFFERENT INPUTS FOR A DIFFERENT RESULT [OVERLOADING]		WE CAN MAKE ANOTHER ADD FUNCTION WITH DIFFERENT INPUTS FOR A DIFFERENT RESULT [OVERLOADING]
//Now if we call "add()" but with floats for inputs it will use this function instead
void add(float num1, float num2) {
	cout << "The sum on number1 and number2 is equal to " << num1 + num2 << "\n\n";
}
void add(string first, string second) {
	cout << first << " plus " << second << " equals " << first + second << "\n\n";
}

//Will return a true or false
//input a string [in "quotes like this"] and "y/n?" is the default value if none provided
bool askYN(string question = "y/n?") {
	do {
		cout << question << "y/n" << endl;
		string input;
		getline(cin, input);

		if (input == "y") {
			return true;
		}
		else if (input == "n") {
			return false;
		}
		else {
			cout << "Pleases type 'y' or 'n'\n";
		}
	} while (true);
}

//The ASTERISK by string makes it a pointer to a string
void showArray(string* array, int arraySize) {
	cout << "\n";
	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << "\n";
	}
	cout << "\n";
}






string professor = "Brian";	//GLOBAL VARIABLE!?		Editing or using these can easily lead to problems and crashes
													//Don't use these when possible




int currentShirtSizeElement = 0;
/*void addShirtSize(string* array, int currentSize) {
	string input;
	cout << "PLease add a shirt size to the array:\n";
	getline(cin, input);

	array[currentSize++] = input;
}*/
/*int addSize(string* array, int currentSize) {
	string input;
	cout << "PLease add a shirt size to the array:\n";
	getline(cin, input);

	return currentSize++;
}*/
/*void addShirtSize(string* array) {
	string input;
	cout << "PLease add a shirt size to the array:\n";
	getline(cin, input);

	array[currentShirtSizeElement++] = input;
}*/
void addShirtSize(string* array) {
	string input;;
	while (true) {
		if (currentShirtSizeElement == 10) {
			break;
		}

		cout << "Please add a shirt size to the array, or type 'done' to exit: ";
		getline(cin, input);

		if (input == "done") {
			break;
		}

		array[currentShirtSizeElement++] = input;
	}
}




int main() {
	string shirtSizes[10];
	int currentSize = 0;
	addShirtSize(shirtSizes);
	showArray(shirtSizes, currentShirtSizeElement);
	/*currentSize = addSize(shirtSizes, currentSize);
	currentSize = addSize(shirtSizes, currentSize);
	currentSize = addSize(shirtSizes, currentSize);
	showArray(shirtSizes, currentSize);*/


	
	sayHello();		//THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO
					//THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO THIS CALLS SAY HELLO
	add(20, 55);
	add(3.111f, 6.13216f);	//THIS DEFINES IT AS A FLOAT, NOT A DOUBLE (the "f" does)

	string first = "hi";
	string second = "light";
	add(first, second);		//Two ways to define the inputs for function
	add("bee", "bo");
	
	string names[3];
	string input;

	names[0] = "Bob";
	names[1] = "Bobby";
	names[2] = "Bobert";

	for (int i = 0; i < 3; i++) {
		cout << names[i] << "\n";
	}

	if (askYN("\nDo you like Pizza? ")) {	//"Do you like Pizza?" is the input for the function
		cout << "\nYay!!! :D\n";
	}
	else {
		cout << "\n:O\n";
	}

	showArray(names, 3);

	sayGoodbye();
}
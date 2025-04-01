#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int health = 10;
int loot = 0;

void story() {		//Tells the story at start of main()
	cout << "	Your journey has been hard, but its not over yet. ";
	cout << "After your village was robbed and ransacked, you began \nchasing the foul beasts who did this. ";
	cout << "Finally, after and endless number of days, and many hard fought battles you see \nthem in the distance. ";
	cout << "You grab your broken shield from your back and instincually reach for your sword too, only to \nremember its no longer there, broken and lost from fending off a bear last week. ";
	cout << "Yet, you are determined to get back \nwhat belongs to your people. ";
	cout << "Charging forwards, you raise your shield and clash with the first monster you see, you \nblock his attack but feel his overwhelming strength. ";
	cout << "You cannot win this fight, but perhaps if you keep fighting just a little longer you can get some of the treasure and make it out alive. ";
	cout << "The first bag of gold looks just within reach. \n\n";
}
bool askYesNo() {	//Asks if player wants to continue
	while (true) {
		string yesNo;
		cout << "Will you keep fighting?\n" << "(Yes/No) >> ";
		getline(cin, yesNo);

		if (yesNo == "Yes") {
			return true;
		}
		else if (yesNo == "No") {
			return false;
		}
		else {
			cout << "\nPlease enter 'Yes' or 'No'\n";
		}
	}
	
	return false;
}
int rollDie() {		//Rolls dice 1-6 (default 6)
	int sides = 6;
	sides = (rand() % 6) + 1;
	return sides;
}
void ending() {		//Ends story
	if (health > 0) {	//Ending if alive
		cout << "\nBreaking free of the monsters, you've realized its better to return with what you have and rebuild\n";
		cout << "You escaped with: " << health << " health, and " << loot << " pieces of loot\n";
	}
	else {				//Ending if dead
		cout << "\nThe monster cuts you down with one final blow, your fight is over, the treasure is gone\nYou stood strong\nGoodbye\n";
	}
}
void adventure() {	//Calls rollDie() for attack, block and lootFound
	int lootFound = 0;
	int block = 0;
	int attack = 0;

	lootFound = rollDie();
	block = rollDie();
	attack = rollDie();

	if (block >= attack) {
		cout << "\nBlock Successful!\n";
		loot = loot + lootFound;
	}
	else {	//No treasure if block fails
		cout << "\nYou've been hit!\n";
		health = health - (attack - block);
	}
}





int main() {
	srand(time(0));	//Seeds random

	story();	//Tells starting story

	while (health > 0) {	//Loop is broken on death or quit
		if (askYesNo() == true) {
			adventure();
			cout << "Your Health is now " << health << "\nYou have " << loot << " pieces of loot\n\n";
		}
		else {
			ending();
			return 0;
		}
	}
	ending();
}
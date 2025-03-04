#include <iostream>
#include <string>
using namespace std;

int main() {
	string favGames[20];
	string input;
	int gameCount = 0;

	cout << "Hello! Today we'll make a list of your favorite games\n" << "Start by adding a game: ";
	getline(cin, input);
	favGames[gameCount] = input;
	gameCount += 1;

	while (true) {
		cout << "\nNow, would you like to..." << "\n\tADD a game to the list" << "\n\tEDIT a name on the list" << "\n\tREMOVE a game from the list" << "\n\tSHOW your current list" << "\n\tor QUIT editing the list?\n";
		getline(cin, input);
		cout << "\n";

		if (input == "ADD" || input == "Add" || input == "add") {								//Adding game to list
			cout<<"What game would you like to add? ";
			getline(cin, input);
			favGames[gameCount] = input;
			gameCount += 1;
		}
		else if (input == "EDIT" || input == "Edit" || input == "edit") {						//Editing game on list
			bool spelling = false;
			while (spelling == false) {	//loop allows for a chance to correct spelling
				cout << "What entry would you like to edit? ";
				getline(cin, input);

				for (int i = 0; i < gameCount; i++) {
					if (favGames[i] == "") {	//skips blank entries
						continue;
					}
					if (input == favGames[i]) {
						spelling = true;	//since spelling was correct, this will break the while loop
						cout << "What would you like to change " << favGames[i] << " to? ";
						getline(cin, input);
						favGames[i] = input;
						break;	//breaks for loop because input was found and edit was made
					}
				}

				if (spelling == false) {	//only read if entry matching input wasnt found
					cout << "\nYour input was unclear, please try again\n";
				}
			}
		}
		else if (input == "REMOVE" || input == "Remove" || input == "remove") {					//Removing game from list
			bool spelling = false;	//same structure as edit overall
			while (spelling == false) {
				cout << "What entry would you like to remove? ";
				getline(cin, input);

				for (int i = 0; i < gameCount; i++) {
					if (favGames[i] == "") {
						continue;
					}
					if (input == favGames[i]) {
						spelling = true;
						cout << "\n" << favGames[i] << " has been removed from the list\n";
						favGames[i] = "";	//only change is no input asked after finding correct entry
						break;
					}
				}

				if (spelling == false) {
					cout << "\nYour input was unclear, please try again\n";
				}
			}
		}
		else if (input == "SHOW" || input == "Show" || input == "show") {						//Showing list
			cout << "Your favorite games are:\n";
			for (int i = 0; i < gameCount; i++) {	//same structure used to check list for entry used to display list
				if (favGames[i] == "") {
					continue;
				}
				cout << "\t";
				cout << favGames[i] << "\n";
			}
		}
		else if (input == "QUIT" || input == "Quit" || input == "quit") {						//Quiting editing list
			break;
		}
		else {																					//Spelling error
			cout << "Your input was unclear, please try again";
		}
	}

	cout << "\nYou have completed your list of favorite games, here it is:\n";
	for (int i = 0; i < gameCount; i++) {
		if (favGames[i] == "") {
			continue;
		}
		cout << "\t";
		cout << favGames[i] << "\n";
	}
}

/*
	pseudocode for FavGame Assignment

	0. Greet player and ask for input
	1. ADD game to array of strings
			ask the player "what name they want to add"
				get input
				add that name to array and increment gameGount
				(optional) tell player what name they've added
	2. EDIT name of game
			ask the player "what name they want to edit"
				get input
				check for name in array
					use for loop to try to match input to games in array
				No match: Repeat if input is not in array
			Found a match: ask the player "what they want to change it to"
				get input
				(optional) tell player what name they've edited
	3. REMOVE the game
			ask the player "what name they want to remove"
				get input
				check for name in array (same as before)
				Repeat if input is not on list
					option to cancel action?
				(optional) tell player what name they've removed
	4. SHOW the list
			use loop to list out each item until gameCount reached
	5. Quit
			show the list one more time?

*/

/*
	if(bestFriends[i] == "") {
		counter += 1;			//If this is in a while loop, this is important to make sure you don't get stuck
		continue;				//Stop the code here, GO TO THE NEXT LOOP
	}

*/

//if(i + 1 == gameCount) Then name not found to find the end of a list

//getline(cin, input); Lets you get an input with spaces in it



//favGames[gameCount++] = input;	is more effecient than

//favGames[gameCount] = input;
//gameCount += 1;



//if (i + 1 == gameCount) allows to have the spelling check inside the for loop instead of a while loop around it
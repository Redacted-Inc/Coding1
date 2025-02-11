

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    string name;
    int health = 10;
    int attack = 0;
    int block = 0;
    int turns = 0;
    
    cout << "Enter name: ";
    cin >> name;
    cout << "Welcome, " << name << ", to the Dungeon.\n\n";

    while (health > 0 && turns < 4) {
        char cont = 'y';
        turns += 1;

        cout << "Your health is: " << health << "\nIt is turn: " << turns << "\nDo you wish to continue delving? (y/n) ";
        cin >> cont;
        cout << "\n";

        if (cont == 'y') {
            attack = (rand() % 5);
            block = (rand() % 5);
            cout << "The enemies attack is " << attack << "\n";
            cout << "Your block is " << block << "\n";

            if (block >= attack) {
                cout << "Block Successfull!\n\n";
            }

            else {
                health = health - (attack - block);
                cout << "You've been hit!\n\n";
            }
        }

        else {
            cout << "You escaped alive!\n" << "Thank you, " << name << ", for playing!\n";
            return 0;
        }
    }

    if (health > 0) {
        cout << "You won!\n" << "Thank you, " << name << ", for playing!\n";
        return 0;
    }

    else {
        cout << "Oh no! You died\n" << "Thank you, " << name << ", for playing!\n";
        return 0;
    }
}

// break; can be used to break out of a loop

/*welcome the player
set up the game
    int health = 10, attack, block, turns = 0
    seed the random number generator
start the loop
    add 1 to turns
    start the encounter
        randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
        if block is greater or equal to attack, successful block
        otherwise, subtract attack value from health.
        ask the player if they would like to keep adventuring. if they don't, break out of the loop.
keep looping while health is greater than zero and fewer than 4 turns have happened
 
if health is greater than 0, congratulate player
otherwise, tell the player they're dead.*/
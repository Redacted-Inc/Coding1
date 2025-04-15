#include <iostream>
#include <string>
using namespace std;

class human {
private:
	
	int health;
	int damage;

public:

	string name;

	human(string givenName, int givenHealth, int givenDamage) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;
	}

	void sayHello() {
		cout << "Hi! My name is " << name << "\n";
	}

	void setHealth(int givenHealth) {
		if (givenHealth < 0) {
			health = 0;
		}
		else if (givenHealth > 10) {
			health = 10;
		}
		else {
			health = givenHealth;
		}
	}

	void changeHealth(int byAmount) {
		health += byAmount;
		setHealth(health);
	}

	void setDamage(int givenDamage) {
		if (givenDamage < 0) {
			damage = 0;
		}
		else if (givenDamage > 100) {
			damage = 100;
		}
		else {
			damage = givenDamage;
		}
	}

	int getHealth() {
		return health;
	}

	int getDamage() {
		return damage;
	}
};





int main() {
	human greg("Gregory", 10, 4);
	cout << greg.name << " has been created, with health: " << greg.getHealth() << " and damage: " << greg.getDamage() << "\n";
	greg.sayHello();

	human bob("bob", 10, 4);
	cout << bob.name << " has been created, with health: " << bob.getHealth() << " and damage: " << bob.getDamage() << "\n";
	bob.sayHello();

	greg.changeHealth(-bob.getDamage());
	cout << greg.name << " has been hit by " << bob.name << "! His health is now " << greg.getHealth() << "\n";

	greg.setDamage(7);
	cout << greg.name << " has found a sword! His damage is now " << greg.getDamage() << "\n";

	bob.changeHealth(-greg.getDamage());
	cout << bob.name << " has been hit by " << greg.name << "! His health is now " << bob.getHealth() << "\n";

	return 0;
}
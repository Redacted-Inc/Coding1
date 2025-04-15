#include <iostream>
#include <string>
using namespace std;

bool debug = true;

class human {
private:					//only human can access this

protected:					//Ths means sub classes can use these items
	
	int health;
	int damage;
	int gold;

public:

	string name;

	human(string givenName, int givenHealth, int givenDamage) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;
	}

	human() {
		//sayHello();
	}

	void sayHello() {
		cout << "Hi! My name is " << name << ". I'm a human with " << health << " hp and I can do " << damage << " damage\n\n";
	}

	void setHealth(int givenHealth) {
		if (givenHealth < 0) {
			health = 0;
		}
		else if (givenHealth > 100) {
			health = 10;
		}
		else {
			health = givenHealth;
		}
	}

	void changeHealth(int byAmount) {
		if (debug) {
			cout << "Health at changeHealth(): " << health << " and byAmount is " << byAmount << "\n";
		}
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

	void changeGold(int byAmount) {
		if (debug) {
			cout << "Gold at changeGold(): " << gold << " and byAmount is " << byAmount << "\n";
		}
		gold += byAmount;
	}

	int getGold() {
		return gold;
	}
};





class barbarian : public human {	//INHERITANCE		NEEDS TO BE PUBLIC
public:								

	barbarian(string givenName, int givenHealth, int givenDamage) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;

		sayHello();
	}
	
	void yell() {
		cout << name << " the Barbarian unleashed their yell, raising their teams stats\n\n";
	}

	void doubleSwing(human& target) {
		cout << name << " the Barbarian swing both weapons at " << target.name << "!\n";

		target.changeHealth(-getDamage() * 2);

		cout << target.name << " has been hit, they are now at " << target.getHealth() << " hp\n\n";
	}
};





class shopKeep : public human {
	
private:

	string shopName;

public:

	string getShop() {
		return shopName;
	}
	
	shopKeep(string givenName, int givenHealth, int givenDamage, int givenGold, string givenShop) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;
		gold = givenGold;
		shopName = givenShop;

		sayHello();
	}

	void dropGold() {
		changeGold(-4);
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
	cout << bob.name << " has been hit by " << greg.name << "! His health is now " << bob.getHealth() << "\n\n";



	barbarian beebo("Beebeebo", 45, 4);

	beebo.sayHello();

	beebo.doubleSwing(greg);

	beebo.yell();

	greg.sayHello();



	shopKeep man("The Man", 10, 2, 200, "The Man's");
	cout << man.name << " has " << man.getGold() << " gold pieces, and works at " << man.getShop();

	return 0;
}
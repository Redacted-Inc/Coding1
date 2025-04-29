#include "Item.h"

//in c++ first enum (enumarator) value is 0, then 1, etc.
//lacation is a variable type we can specify now
//only possible values of location variable are 0-3 and are GREATHALL-MARKET
typedef enum location { GREATHALL, DUNGEON, COURTYARD, MARKET };
//can be used to move an items location (change variable from GREATHALL to, say, COURTYARD, or maybe we add a value for INVENTORY to add it to there

item::item() {
	cout << "creating a new Item!\n";
	location = MARKET;
}
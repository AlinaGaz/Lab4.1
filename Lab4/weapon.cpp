#include <iostream>
#include "weapon.h"
using namespace std;
Weapon::Weapon(string Name, int Damage, int Weight) {
	name = Name;
	damage = Damage;
	weight = Weight;
};
Weapon::Weapon() {
	name = "Default";
	damage = 10;
	weight = 10;
};
Weapon::~Weapon() {
	cout << name << " " << damage << " " << weight << endl;
	cout << "This struct will be deleted!" << endl;
};

bool Weapon::CheckWeight(int maxWeight) {
	if (maxWeight < weight) {
		return true;
	}
	else {
		return false;
	}
}
int Weapon::SumWeight(Weapon* weapon) {
	return weapon->weight + weight;
}
int Weapon::SumWeight(int _weight) {
	return _weight + weight;
}

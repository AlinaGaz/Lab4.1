#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
using namespace std;
class Weapon
{
public:
	string name;
	int damage;
	int weight;
	Weapon(string Name, int Damage, int Weight);
	Weapon();
	~Weapon();

	bool CheckWeight(int maxWeight);
	int SumWeight(Weapon* weapon);
	int SumWeight(int _weight);

private:

};
#endif

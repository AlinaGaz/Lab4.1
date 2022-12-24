#include <iostream>
#include "weapon.h"
using namespace std;


int main()
{
	Weapon first;
	Weapon second = Weapon("Sword", 20, 20);
	cout << first.name << " " << first.damage << " " << first.weight << endl;
	cout << second.name << " " << second.damage << " " << second.weight << endl;
	Weapon Delete1 = Weapon("Static sword", 20, 10);
	Weapon* Delete = new Weapon("Dynamic sword", 30, 50);
	delete Delete;
	cout << "Check: " << first.CheckWeight(8) << endl;
	cout << "Check: " << first.CheckWeight(12) << endl;
	cout << "Sum 1 overload: " << first.SumWeight(&second) << endl;
	cout << "Sum 2 overload: " << second.SumWeight(12) << endl;


}
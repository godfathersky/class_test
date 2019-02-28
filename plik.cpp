#include "pch.h"
#include <iostream>

using namespace std;

class Player {
public:
	double health, armor, gold;
	void print_info() {
		cout << "Liczba hp: " << round(health) << endl;
		cout << "Liczba armoru: " << round(armor) << endl;
		cout << "Liczba monet: " << round(gold) << endl;
	}
};
void fight();
int main() {
	fight();
}
void fight() {
	Player info;
	info.health = 262.49;
	info.armor = 100.53;
	info.gold = 10.31;
	info.gold += 25;
	info.print_info();
}
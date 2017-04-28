#include<iostream>
using namespace std;

void damage(double lvl, double pwr, double atk, double def);

int main() {
	int level = 0;
	int power = 0;
	int attack = 0;
	int defence = 0;

	cout << "give your pokemon's statistics: " << endl;
	cout << "first, it's level "<<endl;
	cin >> level;
	cout << "next, is the moves power "<<endl;
	cin >> power;
	cout << "your pokemons attack" << endl;
	cin >> attack;
	cout << "now the defence" << endl;
	cin >> defence;

	damage(level, power, attack, defence);

	}
void damage(double lvl, double pwr, double atk, double def) {
	double damage = (((((2 * lvl / 5) + 2)*pwr*(atk / def)) / 50) + 2) * 2;
	cout << "the attack does " << damage << " damage" << endl;
}
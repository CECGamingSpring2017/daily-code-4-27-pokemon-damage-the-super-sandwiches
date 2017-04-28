#include<iostream>
using namespace std;

//
double nuke(double orb, double attack);

//[Base Attack Stat * (1 + (0.3 * Orb Amount))] + 3000 "


int main() {
	
	
	double attack = 0;

	double orb;
	
	cout << "give your pokemon's statistics: " << endl;
	cout << "first, it's attack " << endl;
	cin >> attack;
	cout << "next, is the moves power " << endl;
	cin >> orb;
	
	cout<<nuke(orb, attack); //(double damage, double orb, double attack);



	

}
double nuke(double orb,double attack) {
	double dmg = ((attack*(1 + (0.3*orb))) + 3000);
	 return dmg;
}
//void damage(double lvl, double pwr, double atk, double def) {
//	double damage = (((((2 * lvl / 5) + 2)*pwr*(atk / def)) / 50) + 2) * 2;
//	cout << "the attack does " << damage << " damage" << endl;
//}
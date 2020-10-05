#include "VolVie.h"

void VolVie::lancerSort(int &vie, int& mana)
{
	cout << "Le mage lance vol vie !" << endl;
	int* pointeurMage = &vie;
	*pointeurMage += 50;
	cout << "Le mage a maintenant " << *pointeurMage << " points de vie !" << endl;
	pointeurMage = &mana;
	*pointeurMage -= 15;
	cout << "Le mage a maintenant " << *pointeurMage << " points de mana !" << endl;

}

#include "SuperBoom.h"

void SuperBoom::lancerSort(int& vie, int& mana)
{
	cout << "Le mage lance SuperBoom !" << endl;
	int* pointeurMage = &vie;
	*pointeurMage -= 30;
	cout << "Le mage c'est fait mal en lancant, il a maintenant " << *pointeurMage << " points de vie !" << endl;
	pointeurMage = &mana;
	*pointeurMage -= 40;
	cout << "Le mage a maintenant " << *pointeurMage << " points de mana !" << endl;

}

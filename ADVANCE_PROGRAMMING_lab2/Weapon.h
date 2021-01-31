#pragma once
#ifndef _WEAPON_
#define _WEAPON_
#include "iostream"

using namespace std;

class Weapon
{
private:
	string m_weaponName;
	string m_describtion;
	int m_damage;
	string m_abilities[5];
public:
	Weapon(string name, string dscrb, int damage, string abilities[]);

	void setWName(string n);
	void setDescrib(string d);
	void setDamage(int dmg);
	void setAbility(string& a);

	string getWName();
	string getDescrib();
	int getDamage();
	string getAbility();


	friend ostream& operator<<(ostream& out, Weapon w);
};

#endif

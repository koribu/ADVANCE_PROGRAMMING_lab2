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
	int m_abilitySize;
	string* m_abilities;
public:
	Weapon(string name, string dscrb, int damage, string ability[],int arraySize)
	{
		setWName(name);
		setDescrib(dscrb);
		setDamage(damage);
		setArraySize(arraySize);
		setAbility(ability,arraySize);
	}

	void setWName(string n)
	{
		m_weaponName = n;
	}
	void setDescrib(string d)
	{
		m_describtion = d;
	}
	void setDamage(int dmg)
	{
		m_damage = dmg;
	}
	void setArraySize(int s)
	{
		m_abilitySize = s;
	}
	void setAbility(string a[],int size)
	{
		m_abilities = new string[size];
		
		for (int i = 0; i<size;i++)
		{
			m_abilities[i] = a[i];
		}
	
	}

	string getWName()
	{
		return m_weaponName;
	}
	string getDescrib()
	{
		return m_describtion;
	}
	int getDamage()
	{
		return m_damage;
	}
	string* getAbility()
	{
		return m_abilities;
	}
	int getAbilitySize()
	{
		return m_abilitySize;
	}


	friend ostream& operator<<(ostream& out, Weapon w);

};
ostream& operator<<(ostream& out, Weapon w)
{
	
	out << "Weapon: " << w.getWName() << "\nDescription: " << w.getDescrib() << "\nDamage: " << w.getDamage() << "\nAbilities: "<<endl;
	for (int i = 0; i < w.getAbilitySize(); i++)
		out << "- " << w.getAbility()[i]<<"  ";
	out << endl << endl;
	return out;
	
}
#endif

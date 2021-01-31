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

	string getWName();
	string getDescrib();
	int getDamage();
	string getAbility();


	friend ostream& operator<<(ostream& out, Weapon w)
	{
		{
			out << "Weapon: "<<w.getWName() << "\nDescription: " << w.getDescrib() << "\nDamage: "<<w.getDamage()<<"\nAbility: "<<w.getAbility();
			return out;
		}
	}
};

#endif

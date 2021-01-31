#pragma once
#ifndef _CHARACTER_
#define  _CHARACTER_
#include "Weapon.h"

class Character
{
protected:
	string m_name;
	int m_health;
	Weapon* m_weapon;
	int m_arraySize;
public:
	Character(string name, int health)
	{
		setName(name);
		setHealth(health);
	}
	virtual void DisplayInfo()
	{}
	void setName(string name)
	{
		m_name = name;
	}
	void setHealth(int hp)
	{
		m_health = hp;
	}

	string getName() const
	{
		return m_name;
	}
	int getHealth() const
	{
		return m_health;
	}
	
};

class Orc : public Character
{
protected:
	
	string m_grawing;
public:
	Orc(string oName, int oHealth, string grawing) : Character(oName, oHealth)
	{
		string abilities[3] = { "Behead", "360 degree swing", "chopshot " };
		m_weapon = new Weapon("AXE", "Two handed heavy weaponary which used by orc for centuries for glory.", 25, abilities,3);
		setGraw(grawing);
	}
	void setGraw(string graw)
	{
		m_grawing = graw;
	}
	string getGraw() const
	{
		return m_grawing;
	}
	void DisplayInfo()
	{
		cout << "Race: ORC - Name: " << getName() << " " << m_grawing << "! - Health: " << getHealth() << endl << endl;
		cout << m_weapon;
	}
};

class Undead : public Character
{
private:
	string m_moarning;
public:
	Undead(string uName, int uHealth, string moar) :Character(uName, uHealth)
	{
		string abilities[4] = { "Soul Sucker", "Instant Dead", "Mind Control","Dead Riser" };
		m_weapon = new Weapon("BONEWAND", "Magical wand that made by the loved ones bones!", 18, abilities, 4);
		setMoar(moar);
	}

	void setMoar(string moar)
	{
		m_moarning = moar;
	}
	string getMoar()
	{
		return m_moarning;
	}
	void DisplayInfo()
	{
		//cout << "Race: ORC - Name: " << getName() << " " << getMoar() << "! - Health: " << getHealth << endl << endl;
	}
};

class Elf : public Character
{
private:
	string m_salute;
public:
	Elf(string eName, int eHealth, string salute):Character(eName,eHealth)
	{
		string abilities[5] = { "Poison Shot", "Triple Shot", "Phonix Shot","Ivy Shot","Iron Shot" };
		m_weapon = new Weapon("BOW", "Great Elf Bow made of great life tree!", 15, abilities, 5);
		setSalute(salute);
	}
	void setSalute(string salute)
	{
		m_salute = salute;
	}
	string getSalute()
	{
		return m_salute;
	}
	void DisplayInfo()
	{
//		cout << "Race: ORC - Name: " << getName() << " " << getSalute() << "! - Health: " << getHealth << endl << endl;
	}
};
#endif

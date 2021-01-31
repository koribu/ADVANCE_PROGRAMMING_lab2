#pragma once
#ifndef _CHARACTER_
#define  _CHARACTER_
#include "Weapon.h"

class Character
{
protected:
	string m_name;
	int m_health;
	//Weapon* m_weapon;
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
private:
	string m_grawing;
public:
	Orc(string oName, int oHealth, string grawing) : Character(oName, oHealth)
	{
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
//		cout << "Race: ORC - Name: " << getName() << " " << getGraw << "! - Health: " << getHealth << endl << endl;
	}
};

class Undead : public Character
{
private:
	string m_moarning;
public:
	Undead(string uName, int uHealth, string moar) :Character(uName, uHealth)
	{
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

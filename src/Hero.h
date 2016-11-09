/*
 * Hero.h
 *
 *  Created on: Nov 3, 2016
 *      Author: laxpl_000
 */

#ifndef HERO_H_
#define HERO_H_
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

class Hero {
public:
	std::string GetName();
	int GetStrength();
	int GetSpeed();
	int GetHealth();
	int GetDefense();
	int GetDodge();
	bool CheckAlive();
	//Priority: heals health but takes double damage
	void Heal();
	//Determines damage taken
	void TakeDamage(int attackPower);
	//Priority: if opponent attacks on same turn of counter, opponent takes half opponent strength minus opponent defense damage
	void TakeCounterDamage(int attackPower);
	//prepares a powerful attack; does double strength and also punishes counter
	int ChargedAttack(int opponentDefense);
	//normal attack; determines attack power
	int Attack(int opponentDefense);
protected:
	std::string m_name;
	int m_strength;
	int m_speed;
	int m_health;
	int m_defense;
	int m_dodge;
};



#endif /* HERO_H_ */

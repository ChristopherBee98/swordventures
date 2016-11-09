/*
 * Hero.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: laxpl_000
 */
#include "Hero.h"

std::string Hero::GetName() {
	return m_name;
}

int Hero::GetStrength() {
	return m_strength;
}

int Hero::GetHealth() {
	return m_health;
}

int Hero::GetSpeed() {
	return m_speed;
}

int Hero::GetDefense() {
	return m_defense;
}

int Hero::GetDodge() {
	return m_dodge;
}

void Hero::TakeDamage(int attackPower) {
	if (attackPower < 15) {
		m_health -= 15;
	} else {
		m_health -= attackPower;
	}
}

int Hero::ChargedAttack(int opponentDefense) {
	int attackPower = (2*m_strength) - opponentDefense;
	return attackPower;
}

int Hero::Attack(int opponentDefense) {
	int attackPower = m_strength - opponentDefense;
	return attackPower;
}


void Hero::TakeCounterDamage(int attackPower) {
	attackPower /= 2;
	TakeDamage(attackPower);
}

void Hero::Heal() {
	int healthGained = rand() % 50 + 1;
	m_health += healthGained;
}

bool Hero::CheckAlive() {
	return m_health <= 0;
}

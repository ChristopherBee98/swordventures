/*
 * BigSlowHero.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: laxpl_000
 */
#include "Hero.h"
#include "BigSlowHero.h"

BigSlowHero::BigSlowHero(std::string newName, int newStrength, int newDefense, int newHealth, int newSpeed, int newDodge) {
	m_name = newName;
	m_strength = newStrength;
	m_defense = newDefense;
	m_health = newHealth;
	m_speed = newSpeed;
	m_dodge = newDodge;
}


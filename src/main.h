/*
 * main.h
 *
 *  Created on: Nov 4, 2016
 *      Author: laxpl_000
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "Hero.h"
#include "BigSlowHero.h"
#include "AverageHero.h"
#include "SmallFastHero.h"
#include <vector>

const int AVERAGE = 100;
const int LOW = 75;
const int HIGH = 125;

void startingMenu(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero);
void createHero(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero, int choiceOfHero, std::string name, int minStrength, int maxStrength, int minSpeed, int maxSpeed, int minDefense, int maxDefense, int minHealth, int maxHealth, int minDodge, int maxDodge);
void checkHeroes(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero);
void battleMenu(std::vector<AverageHero> &averagehero);
void battleMenu(std::vector<SmallFastHero> &smallfasthero);
void battleMenu(std::vector<BigSlowHero> &bigslowhero);
void battleMenu(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero);
void battleMenu(std::vector<AverageHero> &averagehero, std::vector<BigSlowHero> &bigslowhero);
void battleMenu(std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero);


#endif /* MAIN_H_ */

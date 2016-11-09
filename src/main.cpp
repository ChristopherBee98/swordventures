/*
 * main.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: laxpl_000
 */
#include "main.h"
//attempting to integrate multiple concepts

int main() {
	//need to seperate code into functions
	srand(time(NULL));
	std::vector<AverageHero> averagehero;
	std::vector<BigSlowHero> bigslowhero;
	std::vector<SmallFastHero> smallfasthero;
	startingMenu(averagehero, smallfasthero, bigslowhero);
	checkHeroes(averagehero, smallfasthero, bigslowhero);
	return 0;
}

void startingMenu(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero) {
	std::string nameOfFirstHero, nameOfSecondHero;
	int choiceOfGame, choiceOfFirstHero, choiceOfSecondHero;
	bool isExit = 0, isExit2 = 0;
	do
	{
	std::cout << "Welcome to Swordventures!" << std::endl;
	std::cout << "Select one of the following:" << std::endl;
	std::cout << "1. 1 player game" << std::endl;
	std::cout << "2. 2 player game" << std::endl;
	std::cin >> choiceOfGame;
	switch(choiceOfGame){
	case 1:
		std::cout << "Player 1, what would like to name your hero?" << std::endl;
		std::cin >> nameOfFirstHero;
		nameOfSecondHero = "John";
		do
		{
		std::cout << "Player 1, which type of hero would you like?" << std::endl;
		std::cout << "1. Mysterious hero" << std::endl;
		std::cout << "2. Fast but small hero" << std::endl;
		std::cout << "3. Slow but large hero" << std::endl;
		std::cin >> choiceOfFirstHero;
		switch(choiceOfFirstHero){
		case 1:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfFirstHero, nameOfFirstHero, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH);
			break;
		case 2:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfFirstHero, nameOfFirstHero, LOW, AVERAGE, AVERAGE, HIGH, LOW, AVERAGE, LOW, AVERAGE, AVERAGE, HIGH);
			break;
		case 3:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfFirstHero, nameOfFirstHero, AVERAGE, HIGH, LOW, AVERAGE, AVERAGE, HIGH, AVERAGE, HIGH, LOW, AVERAGE);
			break;
		default:
			std::cout << "Please select a valid hero." << std::endl;
		} }while (isExit2 == 0);
		choiceOfSecondHero = rand() % 3 + 1;
		switch(choiceOfSecondHero){
		case 1:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfSecondHero, nameOfSecondHero, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH);
			break;
		case 2:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfSecondHero, nameOfSecondHero, LOW, AVERAGE, AVERAGE, HIGH, LOW, AVERAGE, LOW, AVERAGE, AVERAGE, HIGH);
			break;
		case 3:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfSecondHero, nameOfSecondHero, AVERAGE, HIGH, LOW, AVERAGE, AVERAGE, HIGH, AVERAGE, HIGH, LOW, AVERAGE);
			break;
	}
		isExit = 1;
		break;
	case 2:
		std::cout << "Player 1, what would like to name your hero?" << std::endl;
		std::cin >> nameOfFirstHero;
		do
		{
		std::cout << "Player 1, which type of hero would you like?" << std::endl;
		std::cout << "1. Mysterious hero" << std::endl;
		std::cout << "2. Fast but small hero" << std::endl;
		std::cout << "3. Slow but large hero" << std::endl;
		std::cin >> choiceOfFirstHero;
		switch(choiceOfFirstHero){
		case 1:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfFirstHero, nameOfFirstHero, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH);
			isExit2 = 1;
			break;
		case 2:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfFirstHero, nameOfFirstHero, LOW, AVERAGE, AVERAGE, HIGH, LOW, AVERAGE, LOW, AVERAGE, AVERAGE, HIGH);
			isExit2 = 1;
			break;
		case 3:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfFirstHero, nameOfFirstHero, AVERAGE, HIGH, LOW, AVERAGE, AVERAGE, HIGH, AVERAGE, HIGH, LOW, AVERAGE);
			isExit2 = 1;
			break;
		default:
			std::cout << "Please select a valid hero." << std::endl;
		} }while (isExit2 == 0);
		std::cout << "Player 2, what would like to name your hero?" << std::endl;
		std::cin >> nameOfSecondHero;
		isExit2 = 0;
		do
		{
		std::cout << "Player 2, which type of hero would you like?" << std::endl;
		std::cout << "1. Mysterious hero" << std::endl;
		std::cout << "2. Fast but small hero" << std::endl;
		std::cout << "3. Slow but large hero" << std::endl;
		std::cin >> choiceOfSecondHero;
		switch(choiceOfSecondHero){
		case 1:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfSecondHero, nameOfSecondHero, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH);
			isExit2 = 1;
			break;
		case 2:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfSecondHero, nameOfSecondHero, LOW, AVERAGE, AVERAGE, HIGH, LOW, AVERAGE, LOW, AVERAGE, AVERAGE, HIGH);
			isExit2 = 1;
			break;
		case 3:
			createHero(averagehero, smallfasthero, bigslowhero, choiceOfSecondHero, nameOfSecondHero, AVERAGE, HIGH, LOW, AVERAGE, AVERAGE, HIGH, AVERAGE, HIGH, LOW, AVERAGE);
			isExit2 = 1;
			break;
		default:
			std::cout << "Please select a valid hero." << std::endl;
		} }while (isExit2 == 0);
		isExit = 1;
		break;
	default:
		std::cout << "Please select a valid game." << std::endl;
} }while (isExit == 0);
}

void createHero(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero, int choiceOfHero, std::string name, int minStrength, int maxStrength, int minSpeed, int maxSpeed, int minDefense, int maxDefense, int minHealth, int maxHealth, int minDodge, int maxDodge) {
	srand(time(NULL));
	int strength = rand() % maxStrength + minStrength;
	int speed = rand() % maxSpeed + minSpeed;
	int defense = rand() % maxDefense + minDefense;
	int health = rand() % maxHealth + minHealth;
	int dodge = rand() % maxDodge + minDodge;
	switch(choiceOfHero){
	case 1:
	{
		AverageHero averagehero1(name, strength, defense, health, speed, dodge);
		averagehero.push_back(averagehero1);
		break;
	}
	case 2:
	{
		SmallFastHero smallhero1(name, strength, defense, health, speed, dodge);
		smallfasthero.push_back(smallhero1);
		break;
	}
	case 3:
	{
		BigSlowHero bighero1(name, strength, defense, health, speed, dodge);
		bigslowhero.push_back(bighero1);
		break;
	}
	}

}

void checkHeroes(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero) {
	int checkAverage = 0;
	int checkBig = 0;
	int checkSmall = 0;
	if ((int)averagehero.size() > 0) {
		if ((int)averagehero.size() == 1) {
			checkAverage += 1;
		} else {
			checkAverage += 2;
		}
	}
	if ((int)smallfasthero.size() > 0) {
		if ((int)smallfasthero.size() == 1) {
			checkSmall += 1;
		} else {
			checkSmall += 2;
		}
	}
	if ((int)bigslowhero.size() > 0) {
		if ((int)bigslowhero.size() == 1) {
			checkBig += 1;
		} else {
			checkBig += 2;
		}
	}
	if (checkAverage == 0 && checkBig == 0 && checkSmall == 2)
		battleMenu(smallfasthero);
	if (checkAverage == 2 && checkBig == 0 && checkSmall == 0)
		battleMenu(averagehero);
	if (checkAverage == 0 && checkBig == 2 && checkSmall == 0)
		battleMenu(bigslowhero);
	if (checkAverage == 1 && checkBig == 1 && checkSmall == 0)
		battleMenu(averagehero, bigslowhero);
	if (checkAverage == 1 && checkBig == 0 && checkSmall == 1)
		battleMenu(averagehero, smallfasthero);
	if (checkAverage == 0 && checkBig == 1 && checkSmall == 1)
		battleMenu(smallfasthero, bigslowhero);
}

void battleMenu(std::vector<AverageHero> &averagehero) {
}

void battleMenu(std::vector<SmallFastHero> &smallfasthero) {
}

void battleMenu(std::vector<BigSlowHero> &bigslowhero) {

}
void battleMenu(std::vector<AverageHero> &averagehero, std::vector<SmallFastHero> &smallfasthero) {

}
void battleMenu(std::vector<AverageHero> &averagehero, std::vector<BigSlowHero> &bigslowhero) {

}
void battleMenu(std::vector<SmallFastHero> &smallfasthero, std::vector<BigSlowHero> &bigslowhero) {

}

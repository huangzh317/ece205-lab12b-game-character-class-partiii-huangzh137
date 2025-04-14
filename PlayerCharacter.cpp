//
// Created by Zi Hao Huang on 4/6/25.
//

#include "PlayerCharacter.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

PlayerCharacter::PlayerCharacter(std::string& newName, int raceNumber) : GameCharacter(newName) {
  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  setHealth(100);
  setAgility(rollDice(10, 1));
  setDefense(rollDice(10, 1));
  setRace(raceNumber);
}

int PlayerCharacter::rollDice(int upper, int lower) {
  return std::rand() % (upper - lower + 1) + lower;
}

RACE PlayerCharacter::getRace() {
  return race;
}

int PlayerCharacter::getHealth() {
  return health;
}
int PlayerCharacter::getAgility() const {
  return agility;
}
int PlayerCharacter::getDefense() const {
  return defense;
}

void PlayerCharacter::setHealth(int newHealth) {
  health = newHealth;
}

void PlayerCharacter::setAgility(int newAgility) {
  agility = newAgility;
}

void PlayerCharacter::setDefense(int newDefense) {
  defense = newDefense;
}

void PlayerCharacter::setRace(int newRaceNumber) {
  switch (newRaceNumber) {
    case 0: race = Wizard; break;
    case 1: race = Elf; break;
    case 2: race = Human; break;
    case 3: race = Orc; break;
    }
}

void PlayerCharacter::printStats() {
  std::string raceName;
  switch (race) {
    case Wizard:
      raceName = "Wizard";
      break;
    case Elf:
      raceName = "Elf";
      break;
    case Human:
      raceName = "Human";
      break;
    case Orc:
      raceName = "Orc";
      break;
  }

  std::cout << "---------- Stats for " << getName() << " ----------\n";
  std::cout << "Race: " << raceName << "\n";
  std::cout << "Health: " << health << "\n";
  std::cout << "Agility: " << agility << "\n";
  std::cout << "Defense: " << defense << "\n";
  std::cout << "-----------------------------------\n";
}
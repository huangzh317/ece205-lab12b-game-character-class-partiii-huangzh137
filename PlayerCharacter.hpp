//
// Created by Zi Hao Huang on 4/6/25.
//

#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include "GameCharacter.hpp"
#include <string>

enum RACE { Wizard = 0, Elf = 1, Human = 2, Orc = 3 };

class PlayerCharacter : public GameCharacter {
protected:
  int health;
  int agility;
  int defense;
  RACE race;

public:
  PlayerCharacter(std::string& newName, int newRace);

  int getHealth();
  int getAgility() const;
  int getDefense() const;
  RACE getRace();

  void setHealth(int newHealth);
  void setAgility(int newAgility);
  void setDefense(int newDefense);
  void setRace(int newRaceNumber);

  void printStats();

  int rollDice(int upper, int lower);
};

#endif

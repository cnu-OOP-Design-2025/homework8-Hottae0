#include "game.h"

int Knight :: getAttack(void) const{
    return 70;
}
int Knight :: getSpeed(void) const{
    return 40;
}
int Knight :: getDefense(void) const{
    return 80;
}


int Wizard :: getAttack(void) const{
    return 50;
}
int Wizard :: getSpeed(void) const{
    return 50;
}
int Wizard :: getDefense(void) const{
    return 30;
}

int Archer :: getAttack(void) const{
    return 60;
}
int Archer :: getSpeed(void) const{
    return 70;
}
int Archer :: getDefense(void) const{
    return 40;
}


int Armor :: getAttack(void) const{
    return character->getAttack();
}
int Armor :: getSpeed(void) const{
    return -5 + character->getSpeed();;
}
int Armor :: getDefense(void) const{
    return 30 + character->getDefense();
}

int Boots :: getAttack(void) const{
    return character->getAttack();
}
int Boots :: getSpeed(void) const{
    return 15 + character->getSpeed();;
}
int Boots :: getDefense(void) const{
    return character->getDefense();
}

int Staff :: getAttack(void) const{
    if(character->getDescription().compare("Wizard") == 0){
        return 60 + character->getAttack();
    }
    return 20 + character->getAttack();
}
int Staff :: getSpeed(void) const{
    return character->getSpeed();
}
int Staff :: getDefense(void) const{
    return character->getDefense();
}

int Bow :: getAttack(void) const{
    if(character->getDescription().compare("Archer") == 0){
        return 65 + character->getAttack();
    }

    return 25 + character->getAttack();
}
int Bow :: getSpeed(void) const{
    return character->getSpeed();;
}
int Bow :: getDefense(void) const{
    return character->getDefense();
}

int Sword :: getAttack(void) const{
    if(character->getDescription().find("Knight") != std::string::npos){
        return 30 + character->getAttack();
    }

    return 30 + character->getAttack();
}
int Sword :: getSpeed(void) const{
    return character->getSpeed();
}
int Sword :: getDefense(void) const{
    return character->getDefense();
}


string Armor :: getDescription() const {
    return character->getDescription() + ", Armor";
}

string Boots :: getDescription() const {
    return character->getDescription() + ", Boots";
}

string Staff :: getDescription() const {
    return character->getDescription() + ", Staff";
}

string Bow :: getDescription() const {
    return character->getDescription() + ", Bow";
}

string Sword :: getDescription() const {
    return character->getDescription() + ", Sword";
}
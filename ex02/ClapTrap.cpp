#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackPoints(0) {
    std::cout << "ClapTrap " << this->name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " tragically died" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
    return;
    }
    if (amount >= hitPoints) {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount << " damage and dies!" << std::endl;
    } else {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " damage! Current HP: " << hitPoints << std::endl;
    }
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " can't attack because it has no hit points!" << std::endl;
        return;
    }
    if (energyPoints == 0) {
        std::cout << "ClapTrap " << name << " can't attack because it has no energy points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackPoints << " points of damage!" << std::endl;
    energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(hitPoints == 0)
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
    else if(energyPoints == 0)
        std::cout << "Not enough energy points to repair" << std::endl;
    else
    {
        hitPoints += amount;
        energyPoints -= 1;
        std::cout << "ClapTrap " << name << " repairs itself and regains " << amount << " points. Current HP: " << hitPoints << std::endl;
    }
}

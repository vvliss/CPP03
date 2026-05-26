#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << this->name << " emerges!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " is destructed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints == 0) {
        std::cout << "FragTrap " << name << " can't throw stones 'cause has no hit points!" << std::endl;
        return;
    }
    if (energyPoints == 0) {
        std::cout << "FragTrap " << name << " can't throw stones 'cause has no energy points!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " attacks " << target << " and damages by " << attackDamage << " points!" << std::endl;
    energyPoints -= 1;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " is now giving high-fives for everyone" << std::endl;
}

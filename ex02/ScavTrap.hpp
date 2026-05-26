#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other) = default;
        ScavTrap& operator=(const ScavTrap& other) = default;
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};
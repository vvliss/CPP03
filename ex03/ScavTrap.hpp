#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap(const std::string& name);
        virtual ~ScavTrap();

        void attack(const std::string& target) override;
        void guardGate();
};
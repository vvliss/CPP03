#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap(const std::string& name);
        virtual ~FragTrap();

        void attack(const std::string& target) override;
        void highFivesGuys(void);
};
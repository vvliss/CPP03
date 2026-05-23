#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string name;
public:
    explicit DiamondTrap(const std::string& name);
    virtual ~DiamondTrap();

    void attack(const std::string& target) override;
    void whoAmI(void);
};
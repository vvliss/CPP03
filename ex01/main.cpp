#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
    std::cout << " TEST 1: Basic Construction " << std::endl;
    ClapTrap claptrap("Clappy");
    
    std::cout << "\n TEST 2: Attack (with 0 damage) " << std::endl;
    claptrap.attack("Enemy1");
    claptrap.attack("Enemy2");
    claptrap.attack("Enemy3");
    
    std::cout << "\n TEST 3: Take Damage " << std::endl;
    claptrap.takeDamage(3);
    claptrap.takeDamage(2);
    claptrap.takeDamage(4);  // Should reach 0 HP
    
    std::cout << "\n TEST 4: Try actions with 0 HP " << std::endl;
    claptrap.attack("Enemy4");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    
    std::cout << "\n TEST 5: Create another ClapTrap " << std::endl;
    ClapTrap claptrap2("Zappy");
    
    std::cout << "\n TEST 6: Repair function " << std::endl;
    claptrap2.beRepaired(3);
    claptrap2.beRepaired(2);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    claptrap2.beRepaired(1);
    
    std::cout << "\n TEST 7: Try to repair with no energy " << std::endl;
    claptrap2.beRepaired(5);
    
    std::cout << "\n TEST 8: Attack with no energy " << std::endl;
    claptrap2.attack("Enemy5");
    
    std::cout << "\n TEST 9: Take damage to kill second ClapTrap " << std::endl;
    claptrap2.takeDamage(15);
    
    std::cout << "\n TEST 10: Destructor test (end of scope) " << std::endl;
    {
        ClapTrap temp("TempTrap");
        std::cout << "TempTrap about to go out of scope..." << std::endl;
    }

    std::cout << "\n TEST 11: ScavTrap construction and Gate keeper mode " << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("EnemyA");
    scav.guardGate();

    std::cout << "\n TEST 12: ScavTrap scope construction/destruction chaining " << std::endl;
    {
        ScavTrap tempScav("TempScav");
        std::cout << "TempScav about to go out of scope..." << std::endl;
    }

    std::cout << "\n TEST 13: Dynamic delete via base pointer (tests virtual dtor) " << std::endl;
    {
        ClapTrap* dyn = new ScavTrap("DynScav");
        std::cout << "About to delete ClapTrap* pointing to ScavTrap..." << std::endl;
        delete dyn;
    }
    std::cout << "\n END OF TESTS " << std::endl;
    return 0;
}

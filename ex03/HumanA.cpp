#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << RED << this->_name << " [HumanA] is entered the ring with " << this->_weapon.getType() << RES << std::endl;
}

HumanA::~HumanA(void) {
}

void HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

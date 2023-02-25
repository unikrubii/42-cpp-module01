#include "Zombie.hpp"
#include "color.hpp"

Zombie::Zombie( std::string name ) {
	this->_name = name;
	std::cout << GRN << "Zombie " << this->_name << " is created" << RES << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << RED << "Zombie " << this->_name << " is destroyed" << RES << std::endl;
}

void Zombie::announce( void ) {
	std::cout << YEL << this->_name << ": BraiiiiiiinnnzzzZ..." << RES << std::endl;
}

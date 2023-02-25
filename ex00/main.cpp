#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main( void )
{
	Zombie *zombie = newZombie( "Armel" );
	zombie->announce();
	delete zombie;
	std::cout << std::endl;

	Zombie *zombie2 = newZombie( "Vlad" );
	zombie2->announce();
	delete zombie2;
	std::cout << std::endl;

	randomChump( "Milya" );
	return 0;
}
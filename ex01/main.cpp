#include "Zombie.hpp"

Zombie* newZombie( std::string name );

int main( void ) {
	Zombie *zombies = zombieHorde( 5, "SUS" );

	for (int i = 0; i < 5; i++) {
		std::cout << i << ": ";
		zombies[i].announce();
	}

	delete [] zombies;
	return 0;
}
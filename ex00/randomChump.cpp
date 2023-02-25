#include "Zombie.hpp"

Zombie *randomChump( std::string name ) {
	Zombie *zombie = new Zombie( name );
	zombie->announce();
	return ( zombie );
}
#include "Harl.hpp"

int main( int argc, char **argv ) {
	Harl harl;
	if ( argc != 2 ) {
		std::cerr << RED << "Usage: ./harl <level>" << RES << std::endl;
		return 1;
	}

	harl.harlFilter( argv[ 1 ] );
	
	return 0;
}
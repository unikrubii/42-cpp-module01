#include "Harl.hpp"

int main( void ) {
	Harl harl;
	harl.complain( "ERROR" );
	harl.complain( "WARNING" );
	harl.complain( "DEBUG" );
	harl.complain( "INFO" );
	harl.complain( "TEST" );
	return 0;
}
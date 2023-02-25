#include "Harl.hpp"

Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void Harl::debug( void ) {
	std::cout << "[DEBUG]..." << std::endl;
	std::cout << "\tSome Debug" << std::endl;
}

void Harl::info( void ) {
	std::cout << GRN << "[INFO]..." << std::endl;
	std::cout << "\tSome Info" << RES << std::endl;
}

void Harl::warning( void ) {
	std::cout << YEL << "[WARNING]..." << std::endl;
	std::cout << "\tSome Warning" << RES << std::endl;
}

void Harl::error( void ) {
	std::cout << RED << "[ERROR]..." << std::endl;
	std::cout << "\tSome Error" << RES << std::endl;
}

void Harl::complain( std::string level ) {
	void ( Harl::*f[4] )( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levelArray[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for ( int i = 0; i < 4; i++ ) {
		if ( level == levelArray[ i ] ) {
			( this->*f[i] )();
			std::cout << std::endl;
			return ;
		}
	}
	std::cout << RED << "Invalid level" << RES << std::endl;
}

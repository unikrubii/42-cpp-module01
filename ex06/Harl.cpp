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

int Harl::_getChoice( std::string level ) {
	std::string levelArray[ 4 ] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for ( int i = 0; i < 4; i++ ) {
		if (level == levelArray[ i ]) {
			return (i);
		}
	}
	return (-1);
}

void Harl::complain( int level ) {
	void ( Harl::*f[4] )( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	( this->*f[level] )();
	std::cout << std::endl;
}

void Harl::harlFilter( std::string level ) {
	int choice = _getChoice( level );

	if ( choice == -1 ) {
		std::cout << MAG << "What are you talking about??" << RES << std::endl;
		return ;
	}

	for ( ; choice < 4; choice++ ) {
		switch ( choice ) {
			case 0:
				complain( choice );
				break ;
			case 1:
				complain( choice );
				break ;
			case 2:
				complain( choice );
				break ;
			case 3:
				complain( choice );
				break;
		}
	}
}

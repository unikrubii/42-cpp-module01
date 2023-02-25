#include "Harl.hpp"

Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void Harl::debug( void ) {
	std::cout << "[DEBUG]..." << std::endl;
}

void Harl::info( void ) {
	std::cout << GRN << "[INFO]..." << RES << std::endl;
}

void Harl::warning( void ) {
	std::cout << YEL << "[WARNING]..." << RES << std::endl;
}

void Harl::error( void ) {
	std::cout << RED << "[ERROR]..." << RES << std::endl;
}

// complain function will call function by pointer to member function without using if/else
void Harl::complain( std::string level ) {
	void ( Harl::*f[4] )( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levelArray[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++) {
		if (level == levelArray[i]) {
			(this->*f[i])();
			return ;
		}
	}
	std::cout << RED << "Invalid level" << RES << std::endl;
}

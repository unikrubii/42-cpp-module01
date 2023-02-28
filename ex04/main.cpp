#include "sed.hpp"

int main( int argc, char **argv ) {
	if (argc != 4) {
		std::cerr << RED << "Usage: ./sed <filename> <s1> <s2>" << RES << std::endl;
		return 1;
	}
	Sed sed( argv[ 1 ], argv[ 2 ], argv[ 3 ] );
	sed.replace();
	return 0;
}

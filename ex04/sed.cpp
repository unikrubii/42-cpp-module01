#include "sed.hpp"

Sed::Sed( std::string filename, std::string s1, std::string s2 ): _s1( s1 ), _s2( s2 ) {
	std::ifstream fd ( filename );
	if ( fd.is_open() ) {
		std::getline( fd, this->_content, '\0' );
		fd.close();
		this->_filenameOut = filename + ".replace";
	}
	else {
		std::cerr << RED << "Error: " << std::strerror( errno ) << RES << std::endl;
		exit( 1 );
	}
}

Sed::~Sed( void ) {
	std::cout << "Sed completed. Try with: >> " << GRN "cat " << this->_filenameOut << RES << " <<" << std::endl;
}

void Sed::_writeFile ( void ) const {
	std::ofstream fd( this->_filenameOut );
	if ( fd.is_open() ) {
		fd << this->_content;
		fd.close();
	}
	else {
		std::cerr << RED << "Error: " << std::strerror( errno ) << RES << std::endl;
		exit( 1 );
	}
}

void Sed::replace( void ) {
	if ( this->_s1.empty() ) {
		std::cerr << RED << "Error: string to replace cannot be empty" << RES << std::endl;
		exit( 2 );
	}

	while ( this->_content.find( this->_s1 ) != std::string::npos ) {
		this->_content.insert( this->_content.find( this->_s1 ) + this->_s1.length(), this->_s2 );
		this->_content.erase( this->_content.find( this->_s1 ), this->_s1.length() );
	}

	Sed::_writeFile();
}

#ifndef SED_H
# define SED_H

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cerrno>
# include "color.hpp"

class Sed {
	public:
		Sed( std::string filename, std::string s1, std::string s2 );
		~Sed( void );
		void replace( void );

	private:
		std::string _filenameOut;
		std::string _content;
		std::string _s1;
		std::string _s2;

		void _writeFile ( void ) const;
};

#endif

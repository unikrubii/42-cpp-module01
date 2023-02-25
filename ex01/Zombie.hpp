#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie( std::string name = "Zombie" );
	~Zombie( void );
	void announce( void );

private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name = "Zombie" );

#endif
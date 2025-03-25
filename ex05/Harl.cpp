#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "Hi, I just wanted to make sure you didn't add pickles as I requested?" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I'm pretty sure you added pickles, because I'm allergic to them and now my nose is all runny." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I must warn you, if you don't remove the pickles I'm never coming back again." << std::endl;
}
void Harl::error( void )
{
	std::cout << "Sorry, this is unacceptable, give me my money back." << std::endl;
}

void Harl::complain( std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << "Didnt match any complain level." << std::endl;
	return ;
}
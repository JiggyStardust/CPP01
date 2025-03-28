/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:13:56 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 13:15:28 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl ( void ) {
	// std::cout << "Constructor" << std::endl;
}

Harl::~Harl ( void ) {
	// std::cout << "Destructor" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Hi, I just wanted to make sure you didn't add pickles as I requested?\n" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I'm pretty sure you added pickles, because I'm allergic to them and now my nose is all runny.\n" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I must warn you, if you don't remove the pickles I'm never coming back again.\n" << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]" <<	 std::endl;
	std::cout << "Sorry, this is unacceptable, give me my money back.\n" << std::endl;
}

int	returnIndex(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return (i);
	}
	return (4);
}

void Harl::complain( std::string level)
{
	void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = returnIndex(level);
	switch (i)
	{
		case 0 :
			(this->*actions[i])();
			i++;
		case 1 :
			(this->*actions[i])();
			i++;
		case 2 :
			(this->*actions[i])();
			i++;
		case 3 :
			(this->*actions[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
	}
	return ;
}
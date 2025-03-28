/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:14:23 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 13:13:54 by sniemela         ###   ########.fr       */
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
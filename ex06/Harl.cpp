/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:13:56 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 15:59:50 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			std::cout << "DEBUG:" << std::endl;
			(this->*actions[i])();
			i++;
		case 1 :
			std::cout << "INFO:" << std::endl;
			(this->*actions[i])();
			i++;
		case 2 :
			std::cout << "WARNING:" << std::endl;
			(this->*actions[i])();
			i++;
		case 3 :
			std::cout << "ERROR:" <<	 std::endl;
			(this->*actions[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
	}
	return ;
}
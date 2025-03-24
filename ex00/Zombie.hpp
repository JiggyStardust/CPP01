/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:46:44 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 10:52:24 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <new>

class Zombie
{
	private:
		std::string _name;

	public:
		void announce( void ); // member function is used like .announce(); ?
		Zombie(std::string name);
		~Zombie( void );
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);
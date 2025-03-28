/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:46:44 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 09:39:13 by sniemela         ###   ########.fr       */
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
		void announce( void );
		Zombie(std::string name);
		~Zombie( void );
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);
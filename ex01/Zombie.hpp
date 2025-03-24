/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:58:13 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 12:02:10 by sniemela         ###   ########.fr       */
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
		Zombie( void );
		~Zombie( void );
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
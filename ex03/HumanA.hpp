/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:42:36 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 15:44:46 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string m_name;
		Weapon *m_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );
		void attack( void );
};
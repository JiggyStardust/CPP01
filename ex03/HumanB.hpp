/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:43:16 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 15:54:52 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string m_name;
		Weapon *m_weapon;
	public:
		HumanB(std::string name);
		~HumanB( void );
		void attack( void );
		void setWeapon(Weapon &weapon);
};
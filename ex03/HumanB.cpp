/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:43:31 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 16:32:54 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack( void )
{
	if (m_weapon)
		std::cout << m_name << " attacked with " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " ran for their dear life" << std::endl;

}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

HumanB::HumanB(std::string name) : m_name(name) 
{
	m_weapon = NULL;
	// std::cout << m_name << " created" << std::endl;
}

HumanB::~HumanB( void )
{
	// std::cout << m_name << " destructed" << std::endl;
}
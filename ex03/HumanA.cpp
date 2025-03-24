/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:42:53 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 16:33:09 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack( void )
{
	std::cout << m_name << " attacked with " << m_weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : m_weapon(&weapon)
{
	m_name = name;
}

HumanA::~HumanA( void )
{
	// std::cout << "HumanA destructed" << std::endl;
}

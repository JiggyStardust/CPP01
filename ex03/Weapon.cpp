/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:54:09 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 16:32:46 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string weapon) : m_type(weapon)
{
	// std::cout << weapon << " created\n";
}

Weapon::~Weapon( void )
{
	// std::cout << m_type << " destructed" << std::endl;
}

void Weapon::setType(std::string type)
{
	m_type = type;
}

const std::string Weapon::getType( void )
{
	return (m_type);
}
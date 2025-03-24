/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:46:17 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 10:54:22 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *ptrzombie = new (std::nothrow) Zombie(name);
	ptrzombie->announce();
	return (ptrzombie);
}
// if (!ptrzombie)
// 		throw ("New failed");
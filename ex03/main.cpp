/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:55:39 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 16:34:21 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("baseball club");
	bob.attack();
	HumanB jim("Jim");
	jim.attack();
	Weapon gun = Weapon("Glock 17");
	jim.setWeapon(club);
	jim.attack();
	jim.setWeapon(gun);
	jim.attack();
	return (0);
}
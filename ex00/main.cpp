/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:46:21 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 09:39:04 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1("Iikka");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Iisakki");
	if (!zombie2)
	{
		std::cout << "new failed\n";
		return (1);
	}
	delete zombie2;
	randomChump("Elmeri");
	return (0);
}
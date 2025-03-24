/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:46:21 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 10:55:59 by sniemela         ###   ########.fr       */
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

// try
// {
// 	Zombie zombie2 = newZombie("Iisakki");
// }
// catch (std::bad_alloc &e)
// 	return 1;
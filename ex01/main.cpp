/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:40:58 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 12:01:22 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *ZombieGang;

	try
	{
		ZombieGang = zombieHorde(5, "Hemuli");
	}
	catch (std::bad_alloc & ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
		return (1);
	}
	for (int i = 0; i < 5; i++)
		ZombieGang[i].announce();
	delete[] ZombieGang;
	return (0);
}
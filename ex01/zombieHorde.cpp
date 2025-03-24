/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:40:23 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 12:05:43 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieGang = new Zombie[N]();
	if (!zombieGang)
		throw std::bad_alloc();
	for (int i = 0; i < N; i++)
		zombieGang[i].setName(name);
	return (zombieGang);
}

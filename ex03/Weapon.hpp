/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:44:03 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/24 15:32:13 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
	private:
		std::string m_type;

	public:
		const	std::string getType( void );
		void	setType(std::string type);
		Weapon(std::string weapon);
		~Weapon( void );
};
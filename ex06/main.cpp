/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:12:45 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 15:33:27 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) 
{
    if (ac != 2)
    {
        std::cout << "One of the following parameters required: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (1);
    }
    Harl harl;

    harl.complain(av[1]);
    return 0;
}
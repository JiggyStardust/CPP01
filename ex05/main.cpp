/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:13:18 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 15:13:22 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << "\nComplain level: Info" << std::endl;
    harl.complain("INFO");
    std::cout << "\nComplain level: Debug" << std::endl;
    harl.complain("DEBUG");
    std::cout << "\nComplain level: Warning" << std::endl;
    harl.complain("WARNING");
    std::cout << "\nComplain level: Error" << std::endl;
    harl.complain("ERROR");
    std::cout << "\nComplain level: Yolo" << std::endl;
    harl.complain("YOLO");

    return 0;
}
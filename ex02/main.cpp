/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:20:10 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 09:51:53 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "mem address of string: " << &brain << "\n" \
			<< "mem address of stringPTR: "<< stringPTR << "\n" \
			<< "mem address of stringREF: " << &stringREF << std::endl;

	std::cout << "value of string: " << brain << "\n" \
			<< "value of stringPTR: "<< *stringPTR << "\n" \
			<< "value of stringREF: " << stringREF << std::endl;
	return (0);
}
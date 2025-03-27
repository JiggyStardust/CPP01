/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:47:36 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/26 08:47:55 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Arguments: filename, string1 and string2" << std::endl;
		return (0);
	}
	std::ifstream infile;
	infile.open (av[1], std::ifstream::in);
	// or: std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cerr << "Error: Cannot open file " << av[1] << std::endl;
		return (1);
	}
	std::string output_filename = std::string(av[1]) + ".replace";
	std::ofstream outfile(output_filename);
	if (!outfile)
	{
        std::cerr << "Error: Unable to create file " << output_filename << std::endl;
        infile.close();
		return (1);
    }
	std::string line;
	while (std::getline(infile, line))
	{
		if (line != av[2])
			outfile << line << "\n";
		else
			outfile << av[3] << "\n";
	}
	infile.close();
	outfile.close();
	return (0);
}
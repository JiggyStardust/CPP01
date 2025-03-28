/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:47:36 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 12:40:14 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	outputToReplace(std::string s1, std::string s2, std::ofstream &outfile, std::ifstream &infile)
{
	std::string line;
	while (std::getline(infile, line))
	{
		std::size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Arguments: filename, string1 and string2" << std::endl;
		return (0);
	}
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cerr << "Error: Cannot open infile " << av[1] << std::endl;
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
	std::string s1 = av[2];
	std::string s2 = av[3];
	outputToReplace(s1, s2, outfile, infile);
	infile.close();
	outfile.close();
	return (0);
}
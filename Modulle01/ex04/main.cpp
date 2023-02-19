/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:20:00 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/19 23:23:05 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileIO.hpp"

int main(int ac, char **av) {
	if (ac != 4)
		std::cerr << "Invalid Arguments." << std::endl;
	else
	{
		fileIO data(av);

		if (data.openInputFile() || data.openOutputFile())
			std::cerr << "Could not open one of the files" << std::endl;
		while (data.readLine()) {
			data.data.replaceStrings();
			data.writeOnOutputFile();
		}
	}
    return (0);
}

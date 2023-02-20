/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:42:11 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/20 16:48:18 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl test;

	std:: cout << "Debug TEST :" << std::endl; 
	test.complain("DEBUG");
	std:: cout << "Info TEST :" << std::endl; 
	test.complain("INFO");
	std:: cout << "Warning TEST :" << std::endl; 
	test.complain("WARNING");
	std:: cout << "Error TEST :" << std::endl; 
	test.complain("ERROR");
	return (0);
}
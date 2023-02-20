/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:57:16 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/20 16:46:54 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    Harl::debug(void) {
	std::cout << "DEBUG level:  love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "INFO level:  cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "WARNING level:I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "ERROR level: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	Harl	obj;
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*pointer[4])(void) = {&Harl::debug,  &Harl::info, &Harl::warning, &Harl::error};

	int	i = 0;

	while (i < 4)
	{
		if (array[i] == level)
		{
			(obj.*pointer[i])();
			break ;
		}
		i++;
	}
}
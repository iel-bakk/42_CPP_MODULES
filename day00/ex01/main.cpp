/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:42:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 18:22:55 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main()
{
    PhoneBook	MyPhoneBook;
	int			i = 0;
	std::string	UserSaid;

	while (true) {
		std::cout << "What Do you like to Do with your phonebook ?" << std::endl;
		if (!std::getline(std::cin, UserSaid).good())
		{
			std::cerr << "Error !" << std::endl;
			break ;
		}
		if (UserSaid == "ADD")
			MyPhoneBook.Add(i % 8);
		else if (UserSaid == "EXIT")
		{
			std::cout << "Service Terminated, EXIT!" << std::endl;
			return (0);
		}
		i++;
	}
}
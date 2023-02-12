/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:04:58 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 17:16:21 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook() {}

std::string PhoneBook::AskUser(std::string message) {
    std::string input;
    std::cout << message << std::endl;
    std::getline(std::cin, input);
    return (input);
}

void    PhoneBook::Add(int i) {
    Contacts[i].SetFirstName(AskUser("Please Give me the First Name :"));
    Contacts[i].SetLastName(AskUser("Please Give Me the Last Name :"));
    Contacts[i].SetNickName(AskUser("Please Give Me the Nick Name :"));
    Contacts[i].SetPhoneNumber(AskUser("Please Give Me the Phone Number :"));
    Contacts[i].SetDarkestSecret(AskUser("SO... WHAT ARE YOUR DARKESR SECRETS !!!:"));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:04:58 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 19:59:19 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook() {}

std::string PhoneBook::AskUser(std::string message) {
    std::string input;
    std::cout << message << std::endl;
    if (!std::getline(std::cin, input).good())
        exit (1);
    return (input);
}

void    PhoneBook::Add(int i) {
    Contacts[i].SetFirstName(AskUser("Please Give me the First Name :"));
    Contacts[i].SetLastName(AskUser("Please Give Me the Last Name :"));
    Contacts[i].SetNickName(AskUser("Please Give Me the Nick Name :"));
    Contacts[i].SetPhoneNumber(AskUser("Please Give Me the Phone Number :"));
    Contacts[i].SetDarkestSecret(AskUser("SO... WHAT ARE YOUR DARKESR SECRETS !!!:"));
}

std::string PhoneBook::truncat(std::string info) {
    return (info.substr(0, 9) + ".");
}

void    PhoneBook::DisplaySearchBar() {
    std::cout << "index     |" ;
    std::cout << "first name|" ;
    std::cout << "last name |" ;
    std::cout << "nickname   " << std::endl;
}

void    PhoneBook::PrintOnlyTen(std::string info) {
    int len = info.length();

    std::cout << info;
    while (len++ < 10)
        std::cout << " ";
}

void    PhoneBook::DisplayContactInfo(int id) {
    std::cout << std::to_string(id) + "         |";
    if (Contacts[id].GetFirstName().length() >= 10)
        std::cout << truncat(Contacts[id].GetFirstName()) << "|";
    else
    {
        PrintOnlyTen(Contacts[id].GetFirstName());
        std::cout << "|"; 
    }
    if (Contacts[id].GetLastName().length() >= 10)
        std::cout << truncat(Contacts[id].GetLastName()) << "|";
    else
    {
        PrintOnlyTen(Contacts[id].GetLastName());
        std::cout << "|"; 
    }
    if (Contacts[id].GetNickName().length() >= 10)
        std::cout << truncat(Contacts[id].GetNickName()) << std::endl;
    else
    {
        PrintOnlyTen(Contacts[id].GetNickName());
        std::cout << std::endl; 
    }
}

void    PhoneBook::Search(int saved) {
    std::string CIN;
    int         Cin;
    DisplaySearchBar();
    for (int i = 0; i < 8 && i < saved; i++) {
        DisplayContactInfo(i);
    }
    std::cout << "Wich contact would you like to see ?" << std::endl;
    if (!std::getline(std::cin, CIN).good())
        exit (1);
    if (CIN.length() > 1)
        std::cout << "Invalid Contact Number try again." << std::endl;
    else
    {
        Cin = std::stoi(CIN);
        DisplaySearchBar();
        DisplayContactInfo(Cin);
    }
}
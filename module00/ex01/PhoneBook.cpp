/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:04:58 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/15 21:57:17 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

std::string PhoneBook::AskUser(std::string message) {
    std::string input;
    std::cout << message << std::endl;
    if (!std::getline(std::cin, input).good())
        exit (1);
    return (input);
}

void    PhoneBook::Add(int i) {
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DSecret;

    FirstName = AskUser("Please Give me the First Name :");
    LastName = AskUser("Please Give Me the Last Name :");
    NickName = AskUser("Please Give Me the Nick Name :");
    PhoneNumber = AskUser("Please Give Me the Phone Number :");
    DSecret = AskUser("SO... WHAT ARE YOUR DARKESR SECRETS !!!:");
    if (FirstName.empty() || LastName.empty() || NickName.empty() || PhoneNumber.empty() || DSecret.empty())
        std::cout << "Invalid contact information try again" << std::endl;
    else
    {
        Contacts[i].SetFirstName(FirstName);
        Contacts[i].SetLastName(LastName);
        Contacts[i].SetNickName(NickName);
        Contacts[i].SetPhoneNumber(PhoneNumber);
        Contacts[i].SetDarkestSecret(DSecret);
    }
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

std::string PhoneBook::CheckContact(int i) {
    return (Contacts[i].GetFirstName());
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
    if (saved)
    {    
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
            if (Cin < saved && Cin < 8)
            {
                std::cout << "Index : " << Cin << std::endl;
                std::cout << "First Name : " << Contacts[Cin].GetFirstName() << std::endl;
                std::cout << "Last Name : " << Contacts[Cin].GetLastName() << std::endl;
                std::cout << "Nick Name : " << Contacts[Cin].GetNickName() << std::endl;
                std::cout << "Phone Number : " << Contacts[Cin].GetPhoneNumber() << std::endl;
                std::cout << "Darkest Secrets : " << Contacts[Cin].GetSecret() << std::endl;
            }
            else
                std::cout << "Unavailable contat id!!!" << std::endl;
        }
    }
    else
        std::cout << "The PhoneBook is empty!!" << std::endl;
}
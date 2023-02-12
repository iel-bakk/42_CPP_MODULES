/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:33:52 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 17:01:39 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
    FirstName = "";
    LastName = "";
    NickName = "";
    PhoneNumber = "";
    DarkestSecret = "";
}

void    Contact::SetFirstName(std::string First) {
    FirstName = First;
}

void    Contact::SetLastName(std::string Last) {
    LastName = Last;
}

void    Contact::SetNickName(std::string Nick){
    NickName = Nick;
}

void    Contact::SetPhoneNumber(std::string Number) {
    PhoneNumber = Number;
}

void    Contact::SetDarkestSecret(std::string Secret) {
    DarkestSecret = Secret;
}

std::string Contact::GetFirstName() const{
    return (FirstName);
}

std::string Contact::GetLastName() const{
    return (LastName);
}

std::string Contact::GetNickName() const{
    return (NickName);
}

std::string Contact::GetPhoneNumber() const{
    return (PhoneNumber);
}

std::string Contact::GetSecret() const{
    return (DarkestSecret);
}

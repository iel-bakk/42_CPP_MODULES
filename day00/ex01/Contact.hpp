/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:07:43 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 16:51:11 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public :
    Contact();
    void        SetFirstName(std::string First);
    void        SetLastName(std::string Last);
    void        SetNickName(std::string Nick);
    void        SetPhoneNumber(std::string Number);
    void        SetDarkestSecret(std::string Secret);
    std::string GetFirstName()const;
    std::string GetLastName()const;
    std::string GetNickName()const;
    std::string GetPhoneNumber()const;
    std::string GetSecret()const;
};

#endif
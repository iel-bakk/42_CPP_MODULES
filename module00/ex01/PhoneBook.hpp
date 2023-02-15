/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:05:04 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/15 19:15:05 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private :
        Contact Contacts[8];
    public :
        PhoneBook();
        void        Add(int i);
        void        Search(int saved);
        void        Exit();
        std::string AskUser(std::string message);
        std::string truncat(std::string info);
        void        DisplaySearchBar();
        void        DisplayContactInfo(int id);
        void        PrintOnlyTen(std::string info);
        std::string CheckContact(int i);
};

#endif
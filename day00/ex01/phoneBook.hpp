/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:05:04 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 17:14:27 by iel-bakk         ###   ########.fr       */
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
        void        Search(int  i);
        void        Exit();
        std::string AskUser(std::string message);
};

#endif
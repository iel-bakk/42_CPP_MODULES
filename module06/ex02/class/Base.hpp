/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:08:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 01:43:04 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

enum ObjectType {
    BaseObjectType,
    DerivedAObjectType,
    DerivedBObjectType,
    DerivedCObjectType
};

class Base {
    public :
        virtual ~Base();
        virtual ObjectType getType() const;
};


Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
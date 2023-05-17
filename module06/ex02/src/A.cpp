/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:19:26 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 01:43:34 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/A.hpp"
#include "../class/Base.hpp"


A::~A() {
    std::cout << "A destructor called." << std::endl;
}

ObjectType A::getType() const {
    return DerivedAObjectType;
}
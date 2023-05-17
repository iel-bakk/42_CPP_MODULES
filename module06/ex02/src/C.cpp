/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:17:18 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 01:43:39 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/C.hpp"
#include "../class/Base.hpp"

C::~C() {
    std::cout << "C destructor called." << std::endl;
}

ObjectType C::getType() const {
    return DerivedCObjectType;
}
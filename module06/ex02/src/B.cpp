/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:13:56 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 01:43:29 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/B.hpp"
#include "../class/Base.hpp"

B::~B() {
    std::cout << "B destructor called." << std::endl;
}

ObjectType B::getType() const {
    return DerivedBObjectType;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:38:28 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 22:50:41 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string type) {
    this->type = type;
}

const std::string& Weapon::getType() {
    return (this->type);
}

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {
    std::cout << "Weapon destroyed" << std::endl;
}
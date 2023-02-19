/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:17:28 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/19 20:17:30 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    weapon = nullptr;
}

void    HumanB::attack (){
    if (this->weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::~HumanB () {
    std::cout << "Destructor called" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}
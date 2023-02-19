/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:13:26 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 20:52:29 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce () {
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::Zombie( std::string name) {
    this->name = name;
}

Zombie::Zombie() {
    this->name = "";
}

Zombie::~Zombie() {
    std::cout << "Destructor Called and " << name << " is Dead for real now" << std::endl;
}

void    Zombie::SetName(std::string name) {
    this->name = name;
}

std::string Zombie::GetName() const{
    return (this->name);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:44:57 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/08 16:50:13 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal --> Default Constructor Called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal --> Destructor Called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :
    type(type){
        std::cout << "WrongAnimal --> paramiterized constructor Called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object) {
    *this = object;
    std::cout << "WrongAnimal --> copy constructor Called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& object) {
    if (this != &object) {
        this->type = object.type;
    }
    return (*this);
}

std::string WrongAnimal::getType() const{
    return (this->type);
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:44:57 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/08 16:49:34 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    this->type = "Animal";
    std::cout << "Animal --> Default Constructor Called." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal --> Destructor Called." << std::endl;
}

Animal::Animal(std::string type) :
    type(type){
        std::cout << "Animal --> paramiterized constructor Called." << std::endl;
}

Animal::Animal(const Animal& object) {
    *this = object;
    std::cout << "Animal --> copy constructor Called." << std::endl;
}

Animal& Animal::operator=(const Animal& object) {
    if (this != &object) {
        this->type = object.type;
    }
    return (*this);
}

std::string Animal::getType() const{
    return (this->type);
}

void    Animal::makeSound() const{
    std::cout << "Animal sound." << std::endl;
}

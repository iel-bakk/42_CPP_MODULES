/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/08 16:50:00 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog --> Default constructor Called." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog --> Destructor Called." << std::endl;
}

Dog::Dog(std::string type){
    this->type = type;
    std::cout << "Dog --> parametirezd constructor called." << std::endl;
}

Dog::Dog(const Dog& object) {
    *this = object;
}

Dog& Dog::operator=(const Dog& object) {
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "The Dog is Barking!!!!" << std::endl;
}

std::string Dog::getType() const{
    return (this->type);
}
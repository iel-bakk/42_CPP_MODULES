/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/09 16:29:27 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog --> Default constructor Called." << std::endl;
}

Dog::~Dog() {
    if (this->brain)
        delete this->brain;
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
        if (!this->brain)
            this->brain = new Brain();
        for (int i = 0; i < 100; i++) {
            this->brain[i] = object.brain[i];
        }
    }
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "The Dog is Barking!!!!" << std::endl;
}

std::string Dog::getType() const{
    return (this->type);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/09 16:28:52 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->brain = new Brain();
    if (!this->brain)
    this->type = "Cat";
    std::cout << "Cat --> Default constructor Called." << std::endl;
}

Cat::~Cat() {
    if (this->brain)
        delete this->brain;
    std::cout << "Cat --> Destructor Called." << std::endl;
}

Cat::Cat(std::string type){
    this->type = type;   
    std::cout << "Cat --> parametirezd constructor called." << std::endl;
}

Cat::Cat(const Cat& object) {
    *this = object;
}

Cat& Cat::operator=(const Cat& object) {
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

void    Cat::makeSound() const{
    std::cout << "The cat is Meowing!!!!" << std::endl;
}

std::string Cat::getType() const{
    return (this->type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/08 16:49:49 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat --> Default constructor Called." << std::endl;
}

Cat::~Cat() {
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
    }
    return *this;
}

void    Cat::makeSound() const{
    std::cout << "The cat is Meowing!!!!" << std::endl;
}

std::string Cat::getType() const{
    return (this->type);
}

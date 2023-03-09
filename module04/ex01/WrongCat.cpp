/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/08 16:50:26 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "WrongCat --> Default constructor Called." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat --> Destructor Called." << std::endl;
}

WrongCat::WrongCat(std::string type){
    this->type = type;   
    std::cout << "WrongCat --> parametirezd constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& object) {
    *this = object;
}

WrongCat& WrongCat::operator=(const WrongCat& object) {
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

void    WrongCat::makeSound() const{
    std::cout << "The Wrongcat is Meowing!!!!" << std::endl;
}

std::string WrongCat::getType() const{
    return (this->type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:44:53 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/27 14:10:40 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed () {
    std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called." << std::endl;
    if (this != &other) {
        this->fixedPointValue = other.getRawBits();
    }
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called." << std::endl;
    if (this != &other) {
        this->fixedPointValue = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointValue;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}
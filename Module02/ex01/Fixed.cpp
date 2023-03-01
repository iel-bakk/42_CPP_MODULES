/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:44:53 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/28 16:18:22 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed () {
    std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const int toConvert) {
    std::cout << "Int constructor called." << std::endl;
    this->fixedPointValue = roundf(toConvert << this->fractionalBits);
}

Fixed::Fixed(const float& toConvert) {
    std::cout << "Float constructor called." << std::endl;
    this->fixedPointValue = roundf(toConvert * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called." << std::endl;
   *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called." << std::endl;
    if (this != &other) {
        this->fixedPointValue = other.fixedPointValue;
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

float Fixed::toFloat( void ) const {
    return (float(this->fixedPointValue) / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const {
    return (roundf(this->fixedPointValue >> this->fractionalBits));
}

std::ostream& operator<<(std::ostream& outStream, const Fixed& object) {
    outStream << object.toFloat();
    return (outStream);
}
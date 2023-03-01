/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:44:53 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/28 21:25:55 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
}

Fixed::~Fixed () {
}

Fixed::Fixed(const int toConvert) {
    this->fixedPointValue = roundf(toConvert << this->fractionalBits);
}

Fixed::Fixed(const float& toConvert) {
    this->fixedPointValue = roundf(toConvert * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
   *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->fixedPointValue = other.fixedPointValue;
    }
    return *this;
}


int Fixed::getRawBits(void) const {
    return this->fixedPointValue;
}

void    Fixed::setRawBits(int const raw) {
    this->fixedPointValue = raw;
}

float Fixed::toFloat( void ) const {
    return (float(this->fixedPointValue) / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const {
    return (roundf(this->fixedPointValue >> this->fractionalBits));
}

// arithmé

Fixed Fixed::operator+(const Fixed& other) {
	Fixed result;

	result.setRawBits(this->fixedPointValue + other.fixedPointValue);
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) {
	Fixed result;

	result.setRawBits(this->fixedPointValue - other.fixedPointValue);
	return (result);
}

float Fixed::operator*(const Fixed& other) {
	return  (this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed& other) {
	return(this->toFloat() / other.toFloat());
}
// comparaison operators overloading

bool Fixed::operator<(const Fixed& other) {
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator<=(const Fixed& other) {
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator>(const Fixed& other) {
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator>=(const Fixed& other) {
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator==(const Fixed& other) {
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed& other) {
	return (this->toFloat() != other.toFloat());
}

std::ostream& operator<<(std::ostream& outStream, const Fixed& object) {
    outStream << object.toFloat();
    return (outStream);
}

Fixed& Fixed::operator++(void) {
	this->setRawBits(this->fixedPointValue + 1);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);

	tmp.setRawBits(this->fixedPointValue++);
	return (tmp);
}

Fixed& Fixed::operator--(void) {
	this->setRawBits(this->fixedPointValue - 1);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);

	tmp.setRawBits(this->fixedPointValue--);
	return (tmp);
}

Fixed& Fixed::min(Fixed& objectA, Fixed& objectB) {
	if (objectA < objectB)
		return (objectA);
	return (objectB);
}

const Fixed& Fixed::min(const Fixed& objectA, const Fixed& objectB) {
	if (objectA.toFloat() < objectB.toFloat()) {
		return (objectA);
	}
	return (objectB);
}

Fixed& Fixed::max(Fixed& objectA, Fixed& objectB) {
	if (objectA > objectB)
		return (objectA);
	return (objectB);
}

const Fixed& Fixed::max(const Fixed& objectA, const Fixed& objectB) {
	if (objectA.toFloat() > objectB.toFloat()) {
		return (objectA);
	}
	return (objectB);
}
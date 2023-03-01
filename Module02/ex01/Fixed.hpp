/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:23:28 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/27 18:55:01 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int fixedPointValue;
        static const int fractionalBits = 8;
    public :
        Fixed ();
        ~Fixed ();
        Fixed (const int toConvert);
        Fixed (const float& toConvert);
        Fixed (const Fixed& other);
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

// overload << operator
std::ostream& operator<<(std::ostream& outStream, const Fixed& object);

#endif
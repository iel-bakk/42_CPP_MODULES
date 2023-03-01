/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:03:06 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/28 21:25:16 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main() {
//     Fixed a(8);
//     Fixed b(1.5f);

//     std::cout << a + b << std::endl;
//     std::cout << a - b << std::endl;
//     std::cout << a * b << std::endl;
//     std::cout << a / b << std::endl;
//     bool test = a < b;
//     std::cout << test << std::endl;

//     return (0);
// }

// int main(void) {
//     Fixed a(1);
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;

//     std::cout << b << std::endl;
//     return (0);
// }

int main(void) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}
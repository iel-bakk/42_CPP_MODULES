/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:38:36 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/08 01:04:19 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ScalarConverter.hpp"

// ScalarConverter::ScalarConverter() {
//     this->_char = 0;
//     this->_char = 0;
//     this->_char = 0;
//     this->_double = 0;
// }

void    ScalarConverter::converter(std::string param) {
    try {
    double number = std::stod(param);
    // ScalarConverter::set_char(static_cast<char>number);
    // ScalarConverter::set_int(static_cast<int>number);
    // ScalarConverter::set_float(static_cast<float>number);
    // ScalarConverter::set_double(static_cast<double>number);
    ScalarConverter::print_char_value(static_cast<char>number);
    ScalarConverter::print_int_value(static_cast<int>number);
    ScalarConverter::print_float_value(static_cast<float>number);
    ScalarConverter::print_double_value(static_cast<double>number);
    } catch (const std::invalid_argument& e) {
        std::cout << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Out of range: " << e.what() << std::endl;
    }
}

void    ScalarConverter::set_char(char c) {
    if (c < 32 || c > 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char : " + c << std::endl;
}

void    
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:36:57 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/08 01:02:27 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
// private:
//     static char    _char;
//     static int     _int;
//     static float   _float;
//     static double  _double;
public:
    // ScalarConverter();
    // ~ScalarConverter();
    static void    converter(std::string param);
    // static void    set_char(char c);
    // static void    set_int(int number);
    // static void    set_float(float number);
    // static void    set_double(float number);
    static void    print_char_value(char c);
    static void    print_int_value(int number);
    static void    print_float_value(float number);
    static void    print_double_value(double number);
};

#endif
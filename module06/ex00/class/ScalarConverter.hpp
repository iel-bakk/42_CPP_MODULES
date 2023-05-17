/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:36:57 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/11 02:20:13 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cfloat>
#include <iomanip>

class ScalarConverter
{
public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter& obj);
    static void	converter(char* param);
	static int	check_type(std::string param);
    static void    print_char_value(double c);
    static void    print_int_value(double number);
    static void    print_float_value(double number);
    static void    print_double_value(double number);
    static int     check_param_for_limit(std::string param);
};

#endif
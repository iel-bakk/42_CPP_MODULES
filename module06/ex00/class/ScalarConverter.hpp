/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:36:57 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/08 00:45:37 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter
{
private:
    static char    _char;
    static int     _int;
    static float   _float;
    static double  _double;
public:
    ScalarConverter();
    ~ScalarConverter();
    void    set_char(char c);
    void    set_int(int number);
    void    set_float(float number);
    void    set_double(float number);
    void    print_char_value();
    void    print_int_value();
    void    print_float_value();
    void    print_double_value();
};


#endif
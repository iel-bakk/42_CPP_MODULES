/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:38:36 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/11 02:20:45 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "Scalar constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
    std::cout << "Scalar Destructor called" << std::endl;
}
ScalarConverter::ScalarConverter(ScalarConverter& obj) {
    (void)obj;
}

void    ScalarConverter::converter(char *param) {
    int check;

    check = ScalarConverter::check_type(std::string(param));
    if (check == 1 && std::string(param).length() != 1) {
        try {
            double number = std::atof(param);
            if (!ScalarConverter::check_param_for_limit(std::string(param))) {
                ScalarConverter::print_char_value(number);
                ScalarConverter::print_int_value(number);
                ScalarConverter::print_float_value(number);
                ScalarConverter::print_double_value(number);
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "Invalid argument: " << e.what() << std::endl;
        } catch (const std::out_of_range& e) {
            std::cout << "Out of range: " << e.what() << std::endl;
        }
    }
    else if (check == 1 && std::string(param).length() == 1) {
        double number;
            try {
            if (*param < '0' || *param > '9')
                number = static_cast<int>(*param);
            else
                number = std::atoi(param);
            if (!ScalarConverter::check_param_for_limit(std::string(param))) {
                ScalarConverter::print_char_value(number);
                ScalarConverter::print_int_value(number);
                ScalarConverter::print_float_value(number);
                ScalarConverter::print_double_value(number);
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "Invalid argument: " << e.what() << std::endl;
        } catch (const std::out_of_range& e) {
            std::cout << "Out of range: " << e.what() << std::endl;
        }
    }
    else{
        std::cout << "char: impossible"  << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

int	ScalarConverter::check_type(std::string param) {
    if (param.length() == 1)
        return (1);
    for (std::string::size_type i = 0; i < param.length(); i++) {
        if (param[i] < '0' || param[i] > '9')
            return (0);
    }
    return (1);
}

void    ScalarConverter::print_char_value(double c) {
    if (c < 32 || c > 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char : " << static_cast<char>(c) << std::endl;
}

void      ScalarConverter::print_int_value(double  number) {
    if (number > INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else if (number < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int : " << static_cast<int>(number) << std::endl;
}

void      ScalarConverter::print_float_value(double  number) {
    if (number > FLT_MAX)
        std::cout << "float: impossible" << std::endl;
    else {
        std::cout << std::setiosflags(std::ios::fixed);
        std::cout.precision(2);
        std::cout << "float : " << static_cast<float>(number) << "f" << std::endl;
    }
}

void      ScalarConverter::print_double_value(double  number) {
    if (number > DBL_MAX)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double : " << static_cast<double>(number) << std::endl;
}

int     ScalarConverter::check_param_for_limit(std::string param) {
    if (param == "-inff" || param == "+inff" || param == "nanf"
        || param == "-inf" || param == "+inf" || param == "nan") {
            std::cout << "char: impossible"  << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
            return (1);
        }
    return (0);
}

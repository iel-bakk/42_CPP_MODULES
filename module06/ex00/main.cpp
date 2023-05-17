/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 01:14:00 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 17:50:09 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        std::cout << "wrong param, try again ..." << std::endl;
    else
        ScalarConverter::converter((av[1]));
    return (0);
}
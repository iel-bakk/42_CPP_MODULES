/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:55:09 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/11 05:40:29 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int main() {
    try {
        Bureaucrat e("test", 2);
        std::cout << e << std::endl;
        e.incrementGrade();
        std::cout << e << std::endl;
    } catch (std::exception& e){
        std::cerr << "error : " << e.what() << std::endl;
        return (1);
    }
    return (0);
}

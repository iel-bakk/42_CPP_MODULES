/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:17:09 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 22:25:35 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string& stringREF = variable;

    std::cout << "The memory address of the string variable : " << &variable << std::endl;
    std::cout << "The memory address held by the striing pointer : " << stringPTR << std::endl;
    std::cout << "The memory address held by the string reference : " << &stringREF << std::endl;
    
    std::cout << "The value of the string variable : " <<  variable << std::endl;
    std::cout << "The value pointed to bystringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to bystringREF : " << stringREF << std::endl;
    return (0);
}
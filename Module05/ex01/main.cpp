/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:55:09 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/11 19:12:39 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Form.hpp"

int main() {
    try {
        Form form("form1", false, 45, 10);
        Bureaucrat work("lol", 46);
        std::cout << form << std::endl;
        work.incrementGrade(); // comment this part to show that everything works
        form.beSigned(work);
        work.signForm(form);
    }
    catch (std::exception& e) {
        std::cerr << "error: " << e.what() << std::endl;
    }
    return (0);
}

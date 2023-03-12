/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:30:55 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 17:49:01 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"
# include "AForm.hpp"

int main() {
    try {
            ShrubberyCreationForm form("tree");
            // RobotomyRequestForm form("robot");
            // PresidentialPardonForm form("president");
            Bureaucrat employee("first", 3);

            form.executeForm(employee);
    }
        catch (std::exception& e){
            std::cout << "Erro : " << e.what() << std::endl;
        }
    return 0;
}
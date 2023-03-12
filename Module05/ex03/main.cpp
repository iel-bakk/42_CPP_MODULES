/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:30:55 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 18:50:29 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "Intern.hpp"

int main() {
    try {
        
        Intern intern;
        Bureaucrat employee("worker", 15);
        AForm *form = intern.makeForm("shrubbery creation", "hello");
        if (form)
        {
            form->executeForm(employee);
            delete form;
        }
    }
        catch (std::exception& e){
            std::cout << "Erro : " << e.what() << std::endl;
        }
    return 0;
}
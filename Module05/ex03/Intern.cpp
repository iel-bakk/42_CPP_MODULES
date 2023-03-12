/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:00:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 18:51:20 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Default constructor called." << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern Destructor called." << std::endl;
}

Intern::Intern(Intern& other) {
    (void)other;
    std::cout << "Intern copy constructor called." << std::endl;
}

Intern& Intern::operator=(Intern& object) {
    (void)object;
    std::cout << "Intern assignement operator called." << std::endl;
    return *this;
}

AForm* Intern::makeForm(std::string formName, std::string target) {
    std::string forms[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    int i = 0;

    while (i < 3) {
        if (forms[i] == formName)
            break;
        i++;
    }
    switch (i)
    {
    case 0: {
            std::cout << "Intern Creates " << formName << "." << std::endl;
            return (new RobotomyRequestForm(target));
    }
    case 1: {   
            std::cout << "Intern Creates " << formName << "." << std::endl;
            return (new PresidentialPardonForm(target));
    }
    case 2: {
            std::cout << "Intern Creates " << formName << "." << std::endl;
            return (new ShrubberyCreationForm(target));
    }
    default:
        std::cout << "Intern Didn't found " << formName << "." << std::endl; 
        break ;
    }
    return (nullptr);
}
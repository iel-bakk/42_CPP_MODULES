/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:55:39 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 18:24:40 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"

class AForm;
class PresindetialPardonForm;
class ShrubbreyRequestForm;
class RobotomyRequestForm;

class Intern {
    public :
        ~Intern();
        Intern();
        Intern(Intern& other);
        Intern& operator=(Intern& object);
        AForm* makeForm(std::string formName, std::string target);
};

# endif
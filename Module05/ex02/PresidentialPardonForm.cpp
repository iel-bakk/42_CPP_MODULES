/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:30:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 17:46:29 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidentialPardon",25, 5){
    this->target = "default";
    std::cout << "PresedentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidentialPardon",25, 5){
    this->target = target;
    std::cout << "PresedentialPardonForm paremetrized constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) : AForm("presidentialPardon",25, 5){
        this->target = other.target;
    std::cout << "PresedentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresedentialPardonForm Deconstructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& object) {
    if (this != &object)
        this->target = object.target;
    return *this;
}
void    PresidentialPardonForm::executeForm(Bureaucrat const& bureaucrat) const {
    if (bureaucrat.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

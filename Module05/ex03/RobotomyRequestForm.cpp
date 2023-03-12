/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:30:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 03:01:09 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyForm",72, 45){
    this->target = "default";
    std::cout << "RobotomyForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyForm",72, 45){
    this->target = target;
    std::cout << "RobotomyForm paremetrized constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm("RobotomyForm",72, 45){
        this->target = other.target;
    std::cout << "RobotomyForm copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyForm Deconstructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& object) {
    if (this != &object)
        this->target = object.target;
    return *this;
}
void    RobotomyRequestForm::executeForm(Bureaucrat const& bureaucrat) const{
    if (bureaucrat.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    else {
        std::srand(std::time(nullptr));
        int random = std::rand();
        if (random % 2 == 1)
            std::cout << "buzz buzz buzzzz.. : " << this->target << " has been robotomized successfull." << std::endl;
        else
            std::cout << "buzz buzz buzzzz.. : " << this->target << " robotomy failed." << std::endl;

    }
}

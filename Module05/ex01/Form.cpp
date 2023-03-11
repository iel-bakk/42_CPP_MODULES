/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 05:41:45 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/11 19:07:13 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form() {
    std::cout << "Form Destructor Called." << std::endl;
}

Form::Form() : name("FormName"),
                requiredGradeSign(150),
                requiredGradeToExecute(150){
    std::cout << "Form Constructor Called." << std::endl;
    this->canSign = false;
}

Form::Form(const std::string name, bool canSign, const int requiredGradeToSign, const int requiredGradeToExecute) :
    name(name),
    canSign(canSign),
    requiredGradeSign(requiredGradeToSign),
    requiredGradeToExecute(requiredGradeToExecute){
        std::cout << "Form parameterized constructor called." << std::endl;
        if (this->requiredGradeSign > 150 || this->requiredGradeToExecute > 150)
            throw Form::GradeTooLowException();
        else if (this->requiredGradeSign < 1 || this->requiredGradeToExecute < 1)
            throw Form::GradeTooHighException();
}

Form::Form(const Form& other) :
    name(other.name),
    canSign(other.canSign),
    requiredGradeSign(other.requiredGradeSign),
    requiredGradeToExecute(other.requiredGradeToExecute){
        std::cout << "Form copy constructor called." << std::endl;
        if (this->requiredGradeSign > 150 || this->requiredGradeToExecute > 150)
            throw Form::GradeTooLowException();
        else if (this->requiredGradeSign < 1 || this->requiredGradeToExecute < 1)
            throw Form::GradeTooHighException();
}

Form& Form::operator=(Form& object) {
	if (this != &object) {
        std::cout << "Form assignement operator." << std::endl;
        this->canSign = object.canSign;
	}
	return *this;
}

int Form::getExecuteGrade() const {
    return this->requiredGradeToExecute;
}

int Form::getSignGrade() const {
    return this->requiredGradeSign;
}

bool Form::canSignForm() const {
	return this->canSign;
}

const std::string Form::formName() const {
	return this->name;
}

void	Form::beSigned(Bureaucrat& employee) {
	if (employee.getGrade() <= this->getSignGrade())
		this->canSign = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& object) {
	os << "Form name : " << object.formName() << ", Grade needed to sign : " << object.getSignGrade() << ", Grade to execute : " << object.getExecuteGrade() << ", is the form signed : " << object.canSignForm() << "." << std::endl;
	return os;
}


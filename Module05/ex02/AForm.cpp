/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 05:41:45 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/11 22:36:24 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm() {
    std::cout << "AForm Destructor Called." << std::endl;
}

AForm::AForm() : name("AFormName"),
                requiredGradeSign(150),
                requiredGradeToExecute(150){
    std::cout << "AForm Constructor Called." << std::endl;
    this->canSign = false;
}

AForm::AForm(const std::string name, const int requiredGradeToSign, const int requiredGradeToExecute) :
    name(name),
    canSign(false),
    requiredGradeSign(requiredGradeToSign),
    requiredGradeToExecute(requiredGradeToExecute){
        std::cout << "AForm parameterized constructor called." << std::endl;
        if (this->requiredGradeSign > 150 || this->requiredGradeToExecute > 150)
            throw AForm::GradeTooLowException();
        else if (this->requiredGradeSign < 1 || this->requiredGradeToExecute < 1)
            throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm& other) :
    name(other.name),
    canSign(other.canSign),
    requiredGradeSign(other.requiredGradeSign),
    requiredGradeToExecute(other.requiredGradeToExecute){
        std::cout << "AForm copy constructor called." << std::endl;
        if (this->requiredGradeSign > 150 || this->requiredGradeToExecute > 150)
            throw AForm::GradeTooLowException();
        else if (this->requiredGradeSign < 1 || this->requiredGradeToExecute < 1)
            throw AForm::GradeTooHighException();
}

AForm& AForm::operator=(AForm& object) {
	if (this != &object) {
        std::cout << "AForm assignement operator." << std::endl;
        this->canSign = object.canSign;
	}
	return *this;
}

int AForm::getExecuteGrade() const {
    return this->requiredGradeToExecute;
}

int AForm::getSignGrade() const {
    return this->requiredGradeSign;
}

bool AForm::canSignForm() const {
	return this->canSign;
}

const std::string AForm::formName() const {
	return this->name;
}

void	AForm::beSigned(Bureaucrat& employee) {
	if (employee.getGrade() <= this->getSignGrade())
		this->canSign = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& object) {
	os << "AForm name : " << object.formName() << ", Grade needed to sign : " << object.getSignGrade() << ", Grade to execute : " << object.getExecuteGrade() << ", is the Aform signed : " << object.canSignForm() << "." << std::endl;
	return os;
}


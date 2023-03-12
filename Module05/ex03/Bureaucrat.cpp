/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:59:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 02:59:36 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"

Bureaucrat::Bureaucrat() :
    name("Bureaucrat"),
    grade(150) {
	std::cout << "Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& other) : 
	name(other.name){
		if (other.grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (other.grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade = other.grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
			if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade = grade;
	std::cout << "Bureaucrat parametrized constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bereaucrat Destructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other) {
	if (this != &other) {
		if (other.grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (other.grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade = other.grade;
	}
	return *this;
}

void	Bureaucrat::incrementGrade() {
	this->grade--;
	if (this->grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::decrementGrade() {
	this->grade++;
	if (this->grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

std::string  Bureaucrat::getName() const {
	return (this->name);
}

void	Bureaucrat::signForm(AForm& form) {
	if (form.canSignForm())
		std::cout << this->getName() << " signed " << form.formName() << "." << std::endl;
	else
		std::cout << this->getName() << " couldn't signed " << form.formName() << "because grade is too low." << std::endl;
}

std::ostream& operator<<(std::ostream& os,const Bureaucrat& object) {
	os << object.getName().c_str() << " , bureaucrat grade " << object.getGrade() << std::endl;
	return os;
}

void Bureaucrat::executeForm(AForm const& form) const {
	if (this->getGrade() <= form.getExecuteGrade())
		std::cout << this->getName() << " executed " << form.formName() << "." << std::endl;
	else
		throw AForm::GradeTooLowException();
}
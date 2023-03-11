/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:59:27 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/11 18:50:42 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private :
		const std::string name;
		int	grade;
	public :
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat& other);
		Bureaucrat& operator=(Bureaucrat& object);
		void	incrementGrade();
		void	decrementGrade();
		std::string getName() const;
		int getGrade() const;
		void	signForm(Form& form);
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw() {
				return "Bureaucrat Grade Too Low.";
				};
		};
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw() {
				return "Bureaucrat Grade Too High.";
				};
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& object);

# endif
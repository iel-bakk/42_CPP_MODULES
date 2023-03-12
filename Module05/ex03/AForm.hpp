/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 05:41:37 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 17:48:03 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected :
		const std::string name;
		bool	canSign;
		const	int	requiredGradeSign;
		const	int requiredGradeToExecute;
	public :
		virtual ~AForm();
		AForm();
		AForm(const std::string name, const int requiredGradeToSign, const int requiredGradeToExecute);
		AForm(const AForm& other);
		AForm& operator=(AForm& object);
		int	getSignGrade() const;
		int	getExecuteGrade() const;
		bool	canSignForm() const;
		const	std::string formName() const;
		void	beSigned(Bureaucrat& employee);
		virtual void executeForm(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw(){
				return "Form Too High exception.";
			};
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw() {
				return "Form Too Low exception.";
			};
		};
};

std::ostream& operator<<(std::ostream& os,const AForm& object);

#endif
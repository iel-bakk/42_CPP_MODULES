/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 05:41:37 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/11 18:50:11 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private :
		const std::string name;
		bool	canSign;
		const	int	requiredGradeSign;
		const	int requiredGradeToExecute;
	public :
		~Form();
		Form();
		Form(const std::string name, bool canSign, const int requiredGradeToSign, const int requiredGradeToExecute);
		Form(const Form& other);
		Form& operator=(Form& object);
		int	getSignGrade() const;
		int	getExecuteGrade() const;
		bool	canSignForm() const;
		const	std::string formName() const;
		void	beSigned(Bureaucrat& employee);
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

std::ostream& operator<<(std::ostream& os,const Form& object);

#endif
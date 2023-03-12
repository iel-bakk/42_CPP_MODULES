/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:30:22 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 17:47:04 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {
    private :
        std::string target;
    public :
        ~RobotomyRequestForm();
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm& operator=(RobotomyRequestForm& object);
		void executeForm(Bureaucrat const& bureaucrat) const;
};


# endif
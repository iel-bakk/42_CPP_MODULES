/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:30:22 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 18:40:32 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDANTIALPARDONFORM_HPP
# define PRESIDANTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
    private :
        std::string target;
    public :
        ~PresidentialPardonForm();
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm& other);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm& operator=(PresidentialPardonForm& object);
		void executeForm(Bureaucrat const& bureaucrat) const;
};


# endif
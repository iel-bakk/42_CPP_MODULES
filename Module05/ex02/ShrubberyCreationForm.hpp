/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:30:22 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 03:08:31 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
    private :
        std::string target;
    public :
        ~ShrubberyCreationForm();
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& object);
		void executeForm(Bureaucrat const& bureaucrat) const;
};


# endif
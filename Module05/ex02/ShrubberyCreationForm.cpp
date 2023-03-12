/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:30:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/12 03:01:09 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyForm",145, 137){
    this->target = "default";
    std::cout << "ShrubberyForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyForm",145, 137){
    this->target = target;
    std::cout << "ShrubberyForm paremetrized constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other) : AForm("ShrubberyForm",145, 137){
        this->target = other.target;
    std::cout << "ShrubberyForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyForm Deconstructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& object) {
    if (this != &object)
        this->target = object.target;
    return *this;
}
void    ShrubberyCreationForm::executeForm(Bureaucrat const& bureaucrat) const {
    if (bureaucrat.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    else {
            std::fstream file(this->target + "_shrubbery", std::ios::out);
            if (file.is_open()) {
                file << "            *\n"
               "           / \\\n"
               "          /   \\\n"
               "         /     \\\n"
               "        /       \\\n"
               "       /         \\\n"
               "      *           *\n"
               "     / \\         / \\\n"
               "    /   \\       /   \\\n"
               "   *     *     *     *\n"
               "  / \\   / \\   / \\   / \\\n"
               " *   * *   * *   * *   *\n" << std::endl;
               file.close();
            }
            else
                std::cerr << "Unable to create file." << std::endl;
                exit (1);
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:06:35 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/19 22:58:21 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

class Sed{
		std::string	fileName;
		std::string line;
		std::string	firstString;
		std::string	secondString;
	public :
		Sed();
		Sed(std::string fileName, std::string firstString, std::string secondString);
		void		setFirstName(std::string fileName);
		void		setFirstString(std::string firstString);
		void		setSecondString(std::string secondString);
		void		setLine(std::string line);
		std::string getFileName()const;
		std::string getFirstString()const;
		std::string getSecondString()const;
		std::string getLine()const;
		void		replaceStrings();
};

#endif
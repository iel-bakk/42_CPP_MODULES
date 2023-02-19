/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:13:34 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/19 23:26:53 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed() {
    this->fileName = "";
    this->firstString = "";
    this->secondString = "";
    this->line = "";
}

Sed::Sed(std::string fileName, std::string firstString, std::string secondString) {
    this->fileName = fileName;
    this->firstString = firstString;
    this->secondString = secondString;
}

std::string Sed::getFileName() const{
    return (this->fileName);
}

std::string Sed::getFirstString() const{
    return (this->firstString);
}

std::string Sed::getSecondString() const{
    return (this->secondString);
}

std::string Sed::getLine() const{
    return (this->line);
}

void    Sed::setFirstName(std::string fileName) {
    this->fileName = fileName;
}

void    Sed::setFirstString(std::string firstString) {
    this->firstString = firstString;
}

void    Sed::setSecondString(std::string secondString) {
    this->secondString = secondString;
}

void    Sed::setLine(std::string line) {
    this->line = line;
}

void    Sed::replaceStrings() {
    size_t pos;

    pos = 0;
    while ((pos = this->line.find(this->firstString, pos)) != std::string::npos) {
		this->line.erase(pos, this->firstString.size());
		this->line.insert(pos, this->secondString);
		pos += this->secondString.size();
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileIO.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:23:08 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/19 22:58:45 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileIO.hpp"

fileIO::fileIO(char **av) {
	data.setFirstName(av[1]);
	data.setFirstString(av[2]);
	data.setSecondString(av[3]);
}

fileIO::~fileIO() {
	inputFile.close();
	outputFile.close();
}

bool fileIO::openInputFile() {
	this->inputFile.open(this->data.getFileName());
	return (!this->inputFile);
}

bool fileIO::openOutputFile() {
	this->outputFile.open(this->data.getFileName() + ".replace");
	return (!this->outputFile);
}

bool fileIO::readLine() {
	std::string	line;

	if (!getline(this->inputFile, line))
		return (false);
	this->data.setLine(line);
	return (true);
}

void	fileIO::writeOnOutputFile(){
	outputFile << this->data.getLine() << std::endl;
}
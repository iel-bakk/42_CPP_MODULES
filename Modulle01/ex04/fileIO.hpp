/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileIO.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:09:48 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/19 22:58:52 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEIO_HPP
#define FILEIO_HPP


#include "Sed.hpp"

class fileIO {
	private :
		std::ifstream	inputFile;
		std::ofstream	outputFile;
	public :
		Sed				data;
		fileIO(char **av);
		~fileIO();
		bool openOutputFile();
		bool openInputFile();
		bool readLine();
		void writeOnOutputFile();
};

#endif
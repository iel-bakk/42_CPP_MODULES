/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:17:18 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/23 22:39:27 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/BitcoinExchange.hpp"

Btc::Btc() {
    std::cout << "Default constructor called." << std::endl;
}

Btc::~Btc() {
    std::cout << "Destructor called." << std::endl;
}

Btc::Btc(std::string dataFile, std::string archiveFile) {
    // std::cout << dataFile << " " << archiveFile;
    std::ifstream input(dataFile);
    std::string     line;
    (void)archiveFile;
    if (input.is_open()) {
        while (std::getline(input, line)) {
            std::cout << line << std::endl;
        }
        input.close();
    }
    else
        std::cout << "Error. couldn't open file." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:53:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/09 16:19:50 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100 ; i++) {
		this->ideas[i] = "idea" + std::to_string(i);
	}
	std::cout << "Brain --> Default constructor called." << std::endl;
}

Brain::Brain (std::string ideas[100]) {
	for (int i = 0; i < 100 ; i++) {
		this->ideas[i] = ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain --> Destructor called." << std::endl;
}

Brain::Brain(Brain& object) {
	if (this != &object) {
		*this = object;
	}
}

Brain& Brain::operator=(Brain& other) {
	if (this != &other) {
			for (int i = 0; i < 100; i++) {
				this->ideas[i] = other.ideas[i];
			}
	}
	return *this;
}
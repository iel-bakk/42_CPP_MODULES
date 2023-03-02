/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:05:25 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/02 16:09:22 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() {
	this->name = "Default";
	this->AttackDamage = 30;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    std::cout << "FragTrap default constructor ." << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->AttackDamage = 30;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    std::cout << "FragTrap parametrized constructor ." << std::endl;
}

FragTrap::FragTrap(FragTrap& object) {
	*this = object;
    std::cout << "FragTrap copy constructor ." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor ." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& object) {
    if (this != &object) {
		this->AttackDamage = object.AttackDamage;
		this->EnergyPoints = object.EnergyPoints;
		this->HitPoints = object.EnergyPoints;
		this->name = object.name;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target) {
	if (this->EnergyPoints) {
		std::cout << "FragTrap " << this->name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage." << std::endl;
		this->EnergyPoints--;
	}
	else
		std::cout << "No energie left!!" << std::endl;
}

void	FragTrap::highFiveGuys() {
	std::cout << "Gimme Five !!." << std::endl;
}

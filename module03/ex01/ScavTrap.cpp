/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:03:13 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/01 20:26:18 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->name = "Default";
	this->AttackDamage = 20;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    std::cout << "ScavTrap default constructor ." << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->AttackDamage = 20;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
	std::cout << "ScavTrap parameterized constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& object) {
	*this = object;
    std::cout << "ScavTrap copy constructor ." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor ." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& object) {
    if (this != &object) {
		this->AttackDamage = object.AttackDamage;
		this->EnergyPoints = object.EnergyPoints;
		this->HitPoints = object.EnergyPoints;
		this->name = object.name;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (this->EnergyPoints) {
		std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage." << std::endl;
		this->EnergyPoints--;
	}
	else
		std::cout << "No energie left!!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:25:16 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/02 16:46:11 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "Default";
	this->AttackDamage = 0;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    std::cout << "Default Constuctor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->AttackDamage = 0;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
	std::cout << "ClapTrap parameterized constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor Called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& object) {
    if (this != &object) {
		this->AttackDamage = object.AttackDamage;
		this->EnergyPoints = object.EnergyPoints;
		this->HitPoints = object.EnergyPoints;
		this->name = object.name;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->HitPoints && this->EnergyPoints) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->HitPoints > 0 && amount >= 0 && static_cast<int>(amount) <= this->HitPoints){
		this->HitPoints -= amount;
		std::cout << this->name << " has taken " << amount << " of Damage." << std::endl;
	}
	else
	{
		this->HitPoints = 0;
		std::cout << "Stop hitting Dead robots !!!!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoints) {
		this->EnergyPoints--;
		if (this->HitPoints < 10 && this->HitPoints + amount <= 10) {
			this->HitPoints += amount;
		}
		else
			this->HitPoints = 10;
		std::cout << this->name << " has recoverd to " << this->HitPoints << "." << std::endl;
	}
	else {
		std::cout << "No energie left" << std::endl;
	}
}

std::string& ClapTrap::myName(void) {
	return (this->name);
}

void	ClapTrap::stats(void) {
	std::cout << this->name << " Hit points : " << this->HitPoints << std::endl;
	std::cout << this->name << " Energie points : " << this->EnergyPoints << std::endl;
}
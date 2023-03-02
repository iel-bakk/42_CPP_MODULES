/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:39:59 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/02 16:35:56 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap objectA("ObjectA");
    ScavTrap objectB("ObjectB");
    ClapTrap objectC("objectC");

// FragTrap work flow :
    objectA.attack("zombie");
    objectA.takeDamage(10);
    objectA.beRepaired(10);
    objectA.highFiveGuys();
    objectA.stats();

// ScavTrap work flow :
    objectB.attack("zombie");
    objectB.takeDamage(10);
    objectB.beRepaired(10);
    objectB.guardGate();
    objectB.stats();

// ClapTrap work flow :
    objectC.attack("zombie");
    objectC.takeDamage(10);
    objectC.beRepaired(10);
    objectC.stats();

    return (0);
}
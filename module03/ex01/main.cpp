/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:39:59 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/02 16:37:26 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap Jim("Jim");
    ClapTrap Roben("Roben");

    Jim.attack("Roben");
    Roben.takeDamage(20);
    Roben.stats();

    Roben.beRepaired(20);
    Roben.stats();
    Jim.stats();

    Jim.guardGate();
    return (0);
}
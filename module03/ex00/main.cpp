/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:06 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/02 16:43:47 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap clapOne("one");
    ClapTrap clapTwo("two");

    clapOne.stats();
    clapTwo.stats();

    clapOne.attack("two");
    clapTwo.takeDamage(0);
    clapTwo.beRepaired(0);
    clapTwo.stats();

    return (0);
}
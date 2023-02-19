/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:43:33 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 21:09:02 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *zombies;
    int     zombieNum;

    zombieNum = 100;
    zombies = zombieHorde(zombieNum, "adam");
    if (zombies){    
        for (int i = 0; i < zombieNum; i++) {
            zombies[i].announce();
        }
        delete []zombies;
    }
    else
        std::cout << "ALLOCATION ERROR" << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:02:20 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 20:07:30 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie *testZombie;
    Zombie zombie("zombie");

    testZombie = newZombie("Jeff");
    if (!testZombie)
        std::cout << "allocation Error" << std::endl;
    else
    {
        testZombie->announce();
        zombie.announce();
        randomChump("Sett");
        delete testZombie;
    }
    return (0);
}
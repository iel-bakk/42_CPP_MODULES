/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:47:44 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 21:18:58 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
    Zombie *zombies;

    zombies = new (std::nothrow)Zombie[N];
    if (zombies)
    {
        for (int i = 0; i < N; i++) {
            zombies[i].SetName(name);
        }
    }
    return (zombies);
}

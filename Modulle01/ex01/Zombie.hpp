/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:10:47 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 20:52:22 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private :
        std::string name;
    public :
        void announce();
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        std::string GetName() const;
        void        SetName(std::string);
};

Zombie*    zombieHorde( int N, std::string name );

#endif
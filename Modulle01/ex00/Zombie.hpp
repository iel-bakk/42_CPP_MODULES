/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:10:47 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/17 19:56:13 by iel-bakk         ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name);

#endif
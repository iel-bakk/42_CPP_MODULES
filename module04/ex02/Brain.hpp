/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:53:45 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/09 15:38:37 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(std::string ideas[100]);
        Brain(Brain& object);
        Brain& operator=(Brain& other);
};

#endif
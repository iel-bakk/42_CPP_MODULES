/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:27 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/09 15:41:00 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private :
        Brain *brain;
    public :
        ~Dog();
        Dog();
        Dog(std::string type);
        Dog(const Dog& object);
        Dog& operator=(const Dog& object);
        void    makeSound() const;
        std::string getType() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:27 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/06 15:08:11 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public :
        ~Cat();
        Cat();
        Cat(std::string type);
        Cat(const Cat& object);
        Cat& operator=(const Cat& object);
        void    makeSound() const;
        std::string getType() const;
};

#endif
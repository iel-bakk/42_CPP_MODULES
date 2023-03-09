/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:57:27 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/06 15:52:37 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public :
        ~WrongCat();
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& object);
        WrongCat& operator=(const WrongCat& object);
        void    makeSound() const;
        std::string getType() const;
};

#endif
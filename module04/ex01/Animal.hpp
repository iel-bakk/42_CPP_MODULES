/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:45:11 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/06 15:08:03 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		virtual ~Animal();
		Animal(std::string name);
		Animal(const Animal& object);
		Animal& operator=(const Animal& object);
		virtual void	makeSound() const;
		virtual std::string getType() const;
};


#endif
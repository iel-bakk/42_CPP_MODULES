/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:45:11 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/06 15:52:18 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal& object);
		WrongAnimal& operator=(const WrongAnimal& object);
		void	makeSound() const;
		std::string getType() const;
};


#endif
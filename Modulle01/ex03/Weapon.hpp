/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:19 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/18 00:15:22 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
	private :
		std::string type;
	public :
		Weapon(std::string type);
		~Weapon();
		const std::string& 	getType();
		void	setType(std::string type);
};

#endif
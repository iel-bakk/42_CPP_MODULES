/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:41:21 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/18 00:42:49 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private :
		Weapon 		*weapon;
		std::string name;
	public :
		HumanB(std::string name);
		~HumanB();
		void			setWeapon(Weapon& weapon);
		void			attack();
};

#endif
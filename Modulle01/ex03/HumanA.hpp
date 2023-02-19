/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:41:21 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/18 00:20:11 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private :
		Weapon& weapon;
		std::string name;
	public :
		HumanA(std::string name, Weapon& weapon);
		void	setWeapon(std::string type);
		void	attack();
};

#endif
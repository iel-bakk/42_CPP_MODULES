/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:05:30 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/02 15:09:17 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public :
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& object);
		FragTrap& operator=(const FragTrap& object);
		void	attack(const std::string& name);
		void	highFiveGuys(void);
};

#endif
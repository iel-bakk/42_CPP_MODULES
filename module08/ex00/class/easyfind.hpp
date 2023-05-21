/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:25:02 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 19:48:42 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
void    easyfind(T first, int second) {
    typename T::iterator it;

    for (it = first.begin(); it != first.end(); it++) {
        if (*it == second) {
            std::cout << "found the value ." << std::endl;
            return ;
        }
    }
    throw std::invalid_argument("value not found.");
}

#endif
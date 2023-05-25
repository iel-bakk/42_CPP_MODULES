/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:31:55 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/25 20:42:02 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/easyfind.hpp"
# include <vector>

int main (void) {
    std::vector <int>vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(5);
    vect.push_back(22);
    vect.push_back(66);
    try {
        easyfind(vect, 6);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
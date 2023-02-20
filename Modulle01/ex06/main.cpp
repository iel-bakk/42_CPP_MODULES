/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:53:18 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/20 17:00:34 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac == 2)
    {
        Harl obj;

        obj.complain(av[1]);
    }
    else
        std::cout << "Wrong Arguments!!" << std::endl;
    return (0);
}
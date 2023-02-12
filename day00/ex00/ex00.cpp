/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:34:08 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/12 15:56:49 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int param = 1; param < ac; param++)
        {
            for (int i = 0; av[param][i]; i++)
            {
                std::cout << (char)toupper(av[param][i]);
            }
            if (param + 1 < ac)
                std::cout << " ";
        }
    }
    std::cout << std::endl;
    return (0);
}
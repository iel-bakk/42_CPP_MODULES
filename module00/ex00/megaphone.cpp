/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:34:08 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/02/15 20:01:26 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    std::string argment;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int param = 1; param < ac; param++)
        {
            argment = av[param];
            for (std::string::size_type i = 0; i < argment.length(); i++)
                std::cout << (char)toupper(argment[i]);
        }
    }
    std::cout << std::endl;
    return (0);
}

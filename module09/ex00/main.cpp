/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:21:44 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/24 21:12:19 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        return (0);
    Btc bitcoin(std::string("data.csv"));
    bitcoin.calculateValue(std::string(av[1]));
    return (0);
}
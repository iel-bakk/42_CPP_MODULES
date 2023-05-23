/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:46:21 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/23 22:38:19 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include <fstream>
# include <sstream>

class Btc {
    private :
        std::map<std::string, float> data;
        std::map<std::string, float> archive;
    public :
        Btc ();
        Btc (std::string dataFile, std::string archiveFile);
        ~Btc ();
};

# endif
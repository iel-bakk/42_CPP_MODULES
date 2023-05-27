/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:46:21 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/27 19:18:53 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <string>
# include <algorithm>
# include <fstream>
# include <sstream>
#include <cstdlib>

typedef struct s_date {
    int     year;
    int     month;
    int     day;
    float   value;
} t_date;

class Btc {
    private :
        std::map<std::string, t_date> data;
        int months[12];
    public :
        Btc ();
        Btc (std::string archiveFile);
        ~Btc ();
        void    calculateValue(std::string inputFile);
        void    init_months();
        bool    isLeapYear(int year);
        t_date    checkDate(std::string date);
};

# endif
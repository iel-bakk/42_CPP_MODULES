/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:17:18 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/25 23:14:25 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/BitcoinExchange.hpp"

Btc::Btc(){
    init_months();
    std::cout << "Default constructor called." << std::endl;
}

Btc::~Btc() {
    std::cout << "Destructor called." << std::endl;
}

t_date    Btc::checkDate(std::string date) {
    int year;
    int month;
    int day;
    t_date data;
    std::string tmp;

    try {
        year = std::atoi(date.substr(0, date.find('-')).c_str());
        data.year = year;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    try {
        tmp = date.substr(date.find('-') + 1);
        month = std::atoi(tmp.substr(0, date.find('-')).c_str());
        data.month = month;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    try {
        day = std::atoi(tmp.substr(date.find('-')).c_str());
        data.day = day;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    return (data);
}

void    Btc::init_months() {
    months[0] = 31;
    months[1] = 29;
    months[2] = 31;
    months[3] = 30;
    months[4] = 31;
    months[5] = 30;
    months[6] = 31;
    months[7] = 31;
    months[8] = 30;
    months[9] = 31;
    months[10] = 30;
    months[11] = 31;
}

Btc::Btc(std::string archiveFile){
    std::ifstream input(archiveFile);
    std::string     line;
    std::string     date;
    float           value;
    int             skip;

    skip = 0;
    init_months();
    if (input.is_open()) {
        while (std::getline(input, line)) {
            if (line.find(',') != std::string::npos){
                date = line.substr(0,line.find(','));
                try {
                    t_date data;
                    if (date == "date" && (line.substr(line.find(',') + 1)) == "exchange_rate" && skip == 1)
                        std::cout << "ivalid value in data base." << std::endl;
                    else {
                    if (date != "date"){

                    data = checkDate(date);
                    value = atof(line.substr(line.find(',') + 1).c_str());
                    if (value < 0 || value > 1000) {
                        data.value = -1;
                    }
                    else
                        data.value = value;
                    this->data.insert(std::make_pair(date, data));
                    }
                    }
                }
                catch (std::exception& e) {
                    std::cerr << e.what() << std::endl;
                }
            }
            else
                std::cout << "invalid value." << std::endl;
        }
    	input.close();
    }
    else
        std::cout << "Error. couldn't open file." << std::endl;
}

void    Btc::calculateValue(std::string inputFile) {
    std::ifstream   input(inputFile);
    std::string     line;
    std::string     date;
    float           value;
    int             skip;

    skip = 0;
    if (input.is_open()) {
        while (std::getline(input, line))
        {
            if (line.find('|') != std::string::npos) {
                date = line.substr(0, line.find('|') - 1);
                if (date == "date" && (line.substr(line.find('|') + 1) == "value") && skip == 1)
                    std::cout << "invalud value." << std::endl;
                else {
                    if (date != "date") {
                    value = atof(line.substr(line.find('|') + 1).c_str());
                    if (value > 1000)
                        std::cout << "Error: too large a number." << std::endl;
				    else if (value < 0)
					    std::cout << "Error: not a positive number." << std::endl;
                    else {
					    std::map<std::string, t_date>::iterator it = this->data.upper_bound(date);
					    it--;
					    std::cout << date << " => " << value << " = " << value * it->second.value << std::endl;
                    }
                }
                }
            }
        }
        input.close();
    }
    else
        std::cerr << "couldn't open input file." << std::endl;
}
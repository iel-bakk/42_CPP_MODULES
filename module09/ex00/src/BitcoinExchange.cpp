/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:17:18 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/24 21:17:21 by iel-bakk         ###   ########.fr       */
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
    init_months();
    if (input.is_open()) {
        while (std::getline(input, line)) {
            if (line.find(',') != std::string::npos){
                date = line.substr(0,line.find(','));
                try {
                    t_date data;
                    data = checkDate(date);
                    value = atof(line.substr(line.find(',') + 1).c_str());
                    if (value < 0 || value > 1000) {
                        data.value = -1;
                    }
                    else
                        data.value = value;
                    this->data.insert(std::make_pair(date, data));
                }
                catch (std::exception& e) {
                    std::cerr << e.what() << std::endl;
                }
            }
            else
                std::cout << "invalid value." << std::endl;
        }
    input.close();
    // for (std::map<std::string, t_date>::iterator it = this->data.begin(); it != this->data.end(); it++) {
    //     std::cout << "date : " << it->first << std::endl;
    //     std::cout << "year : " << it->second.year << std::endl;
    //     std::cout << "month : " << it->second.month << std::endl;
    //     std::cout << "day : " << it->second.day << std::endl;
    //     std::cout << "value : " << it->second.value << std::endl;
    // }
    }
    else
        std::cout << "Error. couldn't open file." << std::endl;
}

void    Btc::calculateValue(std::string inputFile) {
    std::ifstream   input(inputFile);
    std::string     line;
    std::string     date;
    float           value;

    if (input.is_open()) {
        while (std::getline(input, line))
        {
            if (line.find('|') != std::string::npos) {
                date = line.substr(0, line.find('|'));
                value = atof(line.substr(line.find('|') + 1).c_str());
                std::cout << "input : " << date << std::endl;
                std::cout << value << std::endl;
            }
        }
    }
}
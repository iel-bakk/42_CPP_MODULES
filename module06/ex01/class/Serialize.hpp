/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:41:04 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/20 15:46:54 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>

typedef struct s_Data
{
    std::string data;
} Data;


class Serialize
{
private:
    /* data */
public:
    Serialize();
    ~Serialize();
    Serialize(Serialize& obj);
    Serialize& operator=(Serialize& obj);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};


#endif
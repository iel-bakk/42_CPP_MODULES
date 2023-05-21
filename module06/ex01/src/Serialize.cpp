/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:41:13 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/20 15:47:32 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/Serialize.hpp"

Serialize::Serialize() {
    std::cout << "constructor called." << std::endl;
}

Serialize::~Serialize() {
    std::cout << "destructor called." << std::endl;
}

uintptr_t Serialize::serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

Serialize& Serialize::operator=(Serialize& obj) {
    return (obj);
}

Serialize::Serialize(Serialize& obj) {
    (void)obj;
}
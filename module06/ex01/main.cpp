/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:54:19 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/11 01:56:38 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/Serialize.hpp"

int main(void) {
    Data *ptr = new Data();
    ptr->data = "hello";
    uintptr_t test = Serialize::serialize(ptr);
    std::cout << test << std::endl;
    std::cout << Serialize::deserialize(test)->data << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:30:51 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 19:21:14 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/Array.hpp"

int main(void) {
    Array<int> obj(10);
    Array<int> obj1(10);

    for (int i = 0; i < 10; i++) {
        obj[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        obj[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << obj[i] << std::endl;
    }
	try {
		std::cout << "the value in the index given is : "  << obj[5] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
    
	for (int i = 0; i < 10; i++) {
        obj1[i] = obj[i];
    }
	
	for (int i = 0; i < 10; i++) {
        std::cout <<  "obj1 : " << obj1[i] <<  "  ****    obj : " << obj[i] << std::endl;
    }
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:33:56 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/09 19:07:39 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main(void) {
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
    Animal *array[10];

    for (int i = 0; i < 10; i++) {
        if (i % 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    for (int i = 0; i < 10; i++) {
        delete array[i];
    }
    // while (true) {;}
    
    return (0);
}
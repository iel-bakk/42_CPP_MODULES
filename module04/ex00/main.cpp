/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:33:56 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/03/06 15:55:22 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main(void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    j->makeSound();
    meta->makeSound();
    i->makeSound();
    a->makeSound();
    b->makeSound();

    delete meta;
    delete i;
    delete j;
    delete a;
    delete b;
}
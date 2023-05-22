/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:09:29 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/22 15:23:29 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Base.hpp"
#include "../class/A.hpp"
#include "../class/B.hpp"
#include "../class/C.hpp"


Base::~Base() {
    std::cout << "Base destructor called." << std::endl;
}

Base* generate(void) {
    std::srand(std::time(0));
    int randomNumber = (std::rand() % 3) + 1;
    switch (randomNumber)
    {
    case 1:
        return (new A);
        break;
    case 2:
        return (new B);
    case 3:
        return (new C);
        break;
    default:
        return (nullptr);
    }
    return (nullptr);
}

void identify(Base* p) {
    A   *a;
    B   *b;
    C   *c;

    try {
        a = dynamic_cast<A*>(p);
    if (a != nullptr) {
        std::cout << "the pointer pointes to A ***" << std::endl;
        return ;
    }
    }
        catch (std::bad_cast& ex) {
            std::cerr << "cast error." << std::endl;
    }
    try {
        
    b = dynamic_cast<B*>(p);
    if (b != nullptr) {
        std::cout << "the pointer pointes to B ***" << std::endl;
        return ;
    }
    }
        catch (std::bad_cast& ex) {
            std::cerr << "cast error." << std::endl;
    }
    try {

    c = dynamic_cast<C*>(p);
    if (c != nullptr){   
        std::cout << "the pointer pointes to C ***" << std::endl;
        return ;
    }
    }
        catch (std::bad_cast& ex) {
            std::cerr << "cast error." << std::endl;
    }
    std::cout << "the pointer pointes none of the direved classes. ***" << std::endl;
}

void identify(Base& obj) {
    try {
        A& a = dynamic_cast<A&>(obj);
        (void)a;
        std::cout << "it's A." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << " A" << std::endl;
    }
    try {
        B& b = dynamic_cast<B&>(obj);
        (void)b;
        std::cout << "it's B." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << " B" << std::endl;
    }
    try {
        C& c = dynamic_cast<C&>(obj);
        (void)c;
        std::cout << "it's C." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << " C" << std::endl;
    }
}

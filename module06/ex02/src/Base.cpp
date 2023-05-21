/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:09:29 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 14:09:11 by iel-bakk         ###   ########.fr       */
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

ObjectType Base::getType() const {
    return BaseObjectType;
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
    ObjectType type = obj.getType();

    switch (type) {
        case BaseObjectType:
            std::cout << "Object type: Base." << std::endl;
            break;
        case DerivedAObjectType:
            std::cout << "Object type: Derived A." << std::endl;
            break;
        case DerivedBObjectType:
            std::cout << "Object type: Derived B." << std::endl;
            break;
        case DerivedCObjectType:
            std::cout << "Object type: Derived C." << std::endl;
            break;
        default:
            std::cout << "Unknown object type" << std::endl;
    }
}

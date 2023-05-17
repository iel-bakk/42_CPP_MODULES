/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:09:29 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 16:13:00 by iel-bakk         ###   ########.fr       */
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

    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);
    if (a != nullptr)
        std::cout << "the pointer pointes to A ***" << std::endl;
    else if (b != nullptr)
        std::cout << "the pointer pointes to B ***" << std::endl;
    else if (c != nullptr)
        std::cout << "the pointer pointes to C ***" << std::endl;
    else
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

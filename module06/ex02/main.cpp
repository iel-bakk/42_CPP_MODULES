/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 01:36:39 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 16:12:07 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Base.hpp"
#include "class/B.hpp"
#include "class/A.hpp"
#include "class/C.hpp"

int main(void) {
    Base* ptr = generate();
    A a;
    B b;
    C c;
    identify(ptr);
    std::cout << "A test :" << std::endl;
    identify(a);
    std::cout << "B test :" << std::endl;
    identify(b);
    std::cout << "C test :" << std::endl;
    identify(c);
    return (0);
}
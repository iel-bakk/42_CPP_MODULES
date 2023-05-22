/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:51:35 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/22 01:02:35 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/Span.hpp"

// int main(){
//     Span sp = Span(5);
//     sp.addNumber(600);
//     sp.addNumber(100);
//     sp.addNumber(170);
//     sp.addNumber(90);
//     sp.addNumber(110);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
// return 0;
// }

int main(void) {
    Span obj(1000000);
    try {
        for (unsigned int i = 0; i < 1000000; i++) {
            obj.addNumber(i);
        }
        std::cout << "shortest span : " << obj.shortestSpan() << std::endl;
        std::cout << "longest span : " << obj.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
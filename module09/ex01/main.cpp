/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:32:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/27 22:41:21 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stack>
# include <iostream>
# include <string>
# include "class/RPN.hpp"

int main(int ac, char **av) {
    int first;
    int second;
    std::stack<int> numbers;
    std::stack<int> tmp;

    if (ac != 2) {
        std::cout << "Error : invalid arguments." << std::endl;
        return (0);
    }
    for (int i = 0; av[1][i] != '\0'; i++) {
        if (av[1][i] != ' ') {
            if (av[1][i] >= '0' && av[1][i] <= '9') {
                    numbers.push(atoi(av[1] + i));
            }
            else if ((av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '/' || av[1][i] == '*')) {
                if (numbers.size() > 2) {
                    while (numbers.size() > 2) {
                        tmp.push(numbers.top());
                        numbers.pop();
                    }
                }
                    first = numbers.top();
                    numbers.pop();
                    second = numbers.top();
                    numbers.pop();
                    numbers.push(calculate(second, first, av[1][i]));
                if (tmp.size() > 0) {
                    while (tmp.size() > 0) {
                        numbers.push(tmp.top());
                        tmp.pop();
                    }
                }
            }
            else {
                std::cout << "Error." << std::endl;
                return (0);
            }
        }
    }
    std::cout << "Result : " << numbers.top() << std::endl;
    return (0);
}

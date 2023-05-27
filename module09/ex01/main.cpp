/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:32:17 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/27 20:46:05 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stack>
# include <iostream>
# include <string>

// int main(int ac, char **av) {
//     if (ac != 2) {
//         std::cout << "Error : invalid arguments." << std::endl;
//         return (0);
//     }
//     std::stack<int> numbers;
//     for (int i = 0; av[1][i] != '\0'; i++) {
//         if (av[1][i] > '0' && av[1][i] < '9')
//             numbers.push(atoi(av[1] + i));
//         if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '/' || av[1][i] == '*')
//             numbers.push(calculate());
//     }
//     return (0);
// }
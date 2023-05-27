/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:53:32 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/27 22:36:51 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/RPN.hpp"

int calculate(int a, int b, char op) {
    std::cout << "first : " << a << " second : " << b << " op : " << op << std::endl;
    switch (op)
    {
    case '+' :
        return (a + b);
    case '-' :
        return (abs(a - b));
    case '*' :
        return (a * b);
    case '/':
        return (a / b);
    default:
        break;
    }
    return (0);
}
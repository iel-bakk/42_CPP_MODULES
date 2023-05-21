/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:19:53 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/20 17:35:14 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T& first, T& second) {
    T tmp;
    tmp = first;
    first = second;
    second = tmp;
};

template <typename T>
T       min(T first, T second) {
    if (first < second)
        return first;
    return (second);
};

template <typename T>
T       max(T first, T second) {
    if (first > second)
        return (first);
    return (second);
};

#endif

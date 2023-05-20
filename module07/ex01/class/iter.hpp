/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:39:02 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/20 18:39:05 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
#  define ITER_HPP

template <typename T>

void    iter(T *first, T size, void (*f)(T const &)) {
    for (T i = 0; i < size; i++) {

        f(first[i]);
    }
}

template <typename T, typename A>
void    iter(T *first, A size, void (*f)(T const &)) {
    for (A i = 0; i < size; i++) {

        f(first[i]);
    }
}
// template <typename T1, typename T2, typename T3>

// void    iter(T1 first, T2 second, T3 third) const {
//     for (T2 it = 0; it  < second ; it++) {
//         third(first[it]);
//     }
// }

#endif
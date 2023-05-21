/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:39:02 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 17:20:51 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
#  define ITER_HPP

template <typename T>
void    iter(T *array, int size, void  (*f)(T const &)) {
	
	for (int i = 0; i < size; i++) {
		f(array[i]);
	}
};

#endif
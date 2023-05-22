/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:07:19 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/22 01:34:40 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <string>
#include <iostream>
#include <stack>
#include <deque>

template <typename T, class container = std::deque<T>>
class MutantStack : public std::stack<T> {
    public :
        MutantStack() {};
        ~MutantStack() {};
        
};

#endif

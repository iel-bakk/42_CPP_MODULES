/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:07:19 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/25 20:17:01 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <string>
#include <iostream>
#include <stack>
#include <deque>

template <typename T, class container = std::deque < T > >
class MutantStack : public std::stack<T, container> {
    public :
        MutantStack() {};
        ~MutantStack() {};
        MutantStack(MutantStack& obj) {*this = obj;}
        MutantStack& operator=(MutantStack& obj) {
            std::stack<T, container>::operator=(obj);
            return (*this);
        }
        typedef typename container::iterator iterator;
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}

        typedef typename container::iterator const_iterator;
        const_iterator cbegin() {return this->c.cbegin();}
        const_iterator cend() {return this->c.cend();}
};

#endif

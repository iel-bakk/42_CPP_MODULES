/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:51:58 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 21:41:03 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>

class Span {
    private :
        unsigned int    *N;
        unsigned int    total;
        unsigned int    size;
    public :
        Span();
        ~Span();
        Span(unsigned int n);
        Span(Span& obj);
        Span&   operator=(Span& obj);
        void    addNumber(unsigned int number);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

};

# endif
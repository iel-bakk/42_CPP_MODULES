/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:51:58 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/22 00:55:20 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <exception>

class Span {
    private :
        std::vector<unsigned int> vect;
        unsigned int    total;
    public :
        Span();
        ~Span();
        Span(unsigned int n);
        Span(const Span& obj);
        Span&   operator=(Span& obj);
        void    addNumber(unsigned int number);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

};

# endif

// #ifndef SPAN_HPP
// #define SPAN_HPP

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <array>
// #include <exception>

// class Span
// {
// 	private:
// 		unsigned int _size;
// 		std::vector<int> _v;
// 	public:
// 		Span();
// 		Span(unsigned int N);
// 		Span(const Span &obj);
// 		Span &operator=(const Span &obj);
// 		~Span();
// 		void	addNumber(int n);
// 		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
// 		int		shortestSpan();
// 		int		longestSpan();
// 		int& operator[](unsigned int index);
// };




// #endif
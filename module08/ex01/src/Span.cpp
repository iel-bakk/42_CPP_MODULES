/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:05:25 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/22 01:04:34 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/Span.hpp"

Span::Span() {
    this->total = 0;
}

Span::Span(unsigned int n) {
    total = n;
}

Span::~Span() {
    std::cout << "Span destructor called." << std::endl;
}

Span::Span(const Span& obj) {
    this->total = obj.total;
    this->vect = obj.vect;
}

Span& Span::operator=(Span& obj) {
    this->vect = obj.vect;
    this->total = obj.total;
    return (*this);
}

void    Span::addNumber(unsigned int number) {
    if (this->vect.size() < this->total) {
        this->vect.push_back(number);
    }
    else
        throw std::out_of_range("limit reached !");
}

unsigned int    Span::shortestSpan(){
    unsigned int low1;

    if (this->vect.size() == 0)
        return (0);
    else if (this->vect.size() == 1)
        return (this->vect[0]);
    std::vector<unsigned int>::iterator min_it = std::min_element(this->vect.begin(), this->vect.end());
    if (*min_it != vect[0])
        low1 = vect[0];
    else
        low1 = vect[1];
    for (unsigned int i = 0; i < total; i++) {
        if (vect[i] != *min_it && vect[i] < low1)
            low1 = vect[i];
    }
    return (low1 - *min_it);
}

unsigned int    Span::longestSpan(){
    if (this->vect.size() == 0)
        return (0);
    std::vector<unsigned int>::iterator min_it = std::min_element(this->vect.begin(), this->vect.end());
    std::vector<unsigned int>::iterator max_it = std::max_element(this->vect.begin(), this->vect.end());
    return (*max_it - *min_it);
}
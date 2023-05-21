/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:05:25 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 21:43:14 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/Span.hpp"

Span::Span() {
    N = new unsigned int;
    size = 0;
    total = 0;
}

Span::~Span() {
    delete N;
}

Span::Span(Span& obj) {
    *this = obj;
}

Span&   Span::operator=(Span& obj) {
    for (unsigned int i = 0; i < this->size && i < obj.size ; i++) {
        this->N[i] = obj.N[i];
    }
    return (*this);
}

Span::Span(unsigned int n) {
    N = new unsigned int[n];
    size = 0;
    total = n;
    bzero(N, sizeof(unsigned int) * n);
}

void    Span::addNumber(unsigned int number) {
    if (size < total) {
        this->N[this->size] = number;
        this->size++;
    }
    else
        throw std::invalid_argument("limit reached.!!!");
}

unsigned int Span::shortestSpan() {
    unsigned int low1;
    unsigned int low2;

    if (total == 1)
        return (N[0]);
    if (total == 0)
        return (0);
    low1 = this->N[0];
    for (unsigned int i = 0; i < this->total - 1; i++) {
        if (this->N[i + 1] < this->N[i])
            low1 = this->N[i + 1];
    }
    if (low1 == this->N[0])
        low2 = this->N[1];
    else
        low2 = this->N[0];
    for (unsigned int i = 0; i < this->total - 1; i++) {
        if (this->N[i + 1] < this->N[i] && this->N[i + 1] != low1)
            low2 = this->N[i + 1];
    }
    return (low2 - low1);
}

unsigned int Span::longestSpan() {
    unsigned int low1;
    unsigned int low2;

    low2 = 0;
    low1 = 0;
    if (total == 1)
        return (N[0]);
    if (total == 0)
        return (0);
    low1 = this->N[0];
    for (unsigned int i = 0; i < this->total - 1; i++) {
        if (this->N[i + 1] > this->N[i])
            low1 = this->N[i + 1];
    }
    if (low1 == this->N[0])
        low2 = this->N[1];
    else
        low2 = this->N[0];
    for (unsigned int i = 0; i < this->total - 1; i++) {
        if (this->N[i + 1] < this->N[i] && this->N[i + 1] != low1)
            low2 = this->N[i + 1];
    }
    return (low1 - low2);
}
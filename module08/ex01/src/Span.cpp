/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:05:25 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/22 01:03:04 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../class/Span.hpp"

// Span::Span() : _size(0){}

// Span::Span(unsigned int N) : _size(N)
// {
// }

// Span::Span(const Span &obj)
// {
//     *this = obj;
// }

// Span &Span::operator=(const Span &obj)
// {
//     this->_size = obj._size;
//     this->_v = obj._v;
//     return *this;
// }

// Span::~Span(){}

// void    Span::addNumber(int n)
// {
//     try
//     {
//         if (_v.size() == _size)
//             throw std::out_of_range("there are already enough elements");
//         _v.push_back(n);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

// void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
// {
//     while (begin != end)
//     {
//         addNumber(*begin);
//         begin++;
//     }
// }

// int Span::shortestSpan()
// {
//     int shortest;

//     if (_v.size() <= 1)
//         throw std::out_of_range("please add more elements!");
//     std::sort(_v.begin(), _v.end());
//     shortest = _v[1] - _v[0];
//     for (unsigned long i = 0; i < _v.size() - 1; i++)
//         shortest = std::min(shortest, _v[i + 1] - _v[i]);
//     return shortest;
// }

// int Span::longestSpan()
// {
//     int longest;

//     if (_v.size() <= 1)
//         throw std::out_of_range("please add more elements!");
//     std::sort(_v.begin(), _v.end());
//     longest = _v[_v.size() - 1] - _v[0];
//     return longest;
// }

// int &Span::operator[](unsigned int index)
// {
//     if (index >= _v.size())
//       throw std::out_of_range("Index out of bounds");
//     return _v[index];
// }

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
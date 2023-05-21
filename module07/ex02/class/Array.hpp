/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:31:16 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 19:16:19 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP


#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array {
    private :
        T *array;
        unsigned int size;
    public :
        Array() {
            array = new T();
            size = 0;
        };
        
        Array(unsigned int n) {
            array = new T[n];
            bzero(array, sizeof(T) * n);
            size = n;
        };
        ~Array() {
                delete array;
        };
        
        Array(Array &obj) {
            this->array = new T[obj.get_size()];
            bzero(this->array, sizeof(T) * obj.get_size());
            this->size = obj.get_size();
            *this = obj;
        };
        
        Array  &operator=(Array &obj) {
            if (obj.size == 0)
                return (*this);
            for (unsigned int i = 0; i < this->get_size() && i < obj.get_size() ; i++) {
                this->array[i] = obj[i];
            }
            return (*this);
        };
        
        T   &operator[](unsigned int i) {
            if (i >= this->size)
                throw std::invalid_argument("invalid index.");
            return (this->array[i]);
        }
        
        unsigned int get_size() {
            return (this->size);
        }
};


#endif
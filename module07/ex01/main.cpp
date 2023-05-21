/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:46:24 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/21 17:22:52 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/iter.hpp"

# include <iostream>
# include <string>

class Awesome{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
        
        private:
            int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
    o << rhs.get(); return o;
}

template< typename T >void print( T const & x ) {
    std::cout << x << std::endl;
    return;
}

int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
     // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];
    // char tab2[] = {'a', 'b', 'c', 'd'};
    iter(tab, 5, print);
    iter(tab2, 5, print);
    return 0;
}

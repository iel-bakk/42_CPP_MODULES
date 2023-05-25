/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:21:36 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/25 20:29:12 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/MutantStack.hpp"
# include <list>

int main(void) {
    MutantStack<int>    mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while(it != ite){
        std::cout << "mutantstack : " << *it << std::endl;
        ++it;
    }
    // list implementation
    std::list<int> _list;
    _list.push_back(5);
    _list.push_back(17);
    std::cout << _list.back() << std::endl;
    _list.pop_back();
    std::cout << _list.size() << std::endl;
    _list.push_back(3);
    _list.push_back(5);
    _list.push_back(737);
    _list.push_back(0);
    std::list<int>::iterator _it = _list.begin();
    std::list<int>::iterator _ite = _list.end();
    ++_it;
    --_it;
    while(_it != _ite){
        std::cout << "list : " << *_it << std::endl;
        ++_it;
    }

    return 0;
}

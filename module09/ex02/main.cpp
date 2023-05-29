/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:06:07 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/28 22:20:43 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac > 2) {
        std::vector <int> arr;
        for (int i = 1; i < ac ; i++) {
            arr.push_back(atoi(av[i]));
        }
        insertSort(arr);
        for (std::vector<int>::iterator it = arr.begin(); it != arr.end() ; it++) {
		    std::cout << *it << std::endl;
	    }
    }
    return (0);
}
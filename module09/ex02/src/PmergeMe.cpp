/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:11:00 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/29 23:52:43 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "../class/PmergeMe.hpp"

void    insertSort(std::vector<int>& arr) {
	for (size_t i = 1; i < arr.size(); i++) {
		size_t	j = i - 1;
		int	current = arr[i];
		while (j >= 0 && arr[j] > current){
			arr[j + 1] = arr[j];
            j--;
		}
		arr[j + 1] = current;
	}
}

void    mergeSort(std::vector<int>& arr) {
	std::vector<int> left;
	std::vector<int> right;
	size_t i = 0;
	size_t j = 0;
	for (; i < arr.size(); i++) {
		if (i < arr.size() / 2) {
			left[i] = arr[i];
		}
		else {
			right[j] = arr[i];
			j++;
		}
	}
	mergeSort(left);
	mergeSort(right);
	merge(left, right, arr);
}
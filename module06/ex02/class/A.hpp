/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:18:05 by iel-bakk          #+#    #+#             */
/*   Updated: 2023/05/17 01:31:13 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_CPP
#define A_CPP

#include "Base.hpp"

class A : public Base {
    public :
        ~A();
        ObjectType getType() const;
};

#endif
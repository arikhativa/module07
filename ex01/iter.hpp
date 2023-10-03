/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:23:18 by yrabby            #+#    #+#             */
/*   Updated: 2023/10/03 15:00:46 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *array, ::size_t length, void (*f)(T &))
{
    for (::size_t i = 0; i < length; ++i)
        f(array[i]);
}

template <typename T> void print(T &i)
{
    std::cout << i << " ";
}

template <int> void print(int &i)
{
    std::cout << i << " ";
}

#endif

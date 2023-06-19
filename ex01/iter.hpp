/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:23:18 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/19 11:40:55 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename T>
void	iter(T *array, std::size_t length, void (*f)(T &))
{
	for (std::size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	print(T &i)
{
	std::cout << i << std::endl;
}

template <int>
void	print(int &i)
{
	std::cout << i << std::endl;
}

#endif

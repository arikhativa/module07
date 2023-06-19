/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:42:23 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/19 12:40:23 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <iostream>

template < typename T >
class Array
{
	public:

	/*
	** ------------------------------- CONSTRUCTOR --------------------------------
	*/

		Array()
			: _array(NULL), _size(0)
		{
		};
		
		explicit Array(unsigned int n)
			: _array(new T[n]), _size(n)
		{

		};

		Array( Array const & src )
			: _array(new T[src.size()]), _size(src.size())
		{
			std::size_t	i = 0;

			while (i < src.size())
			{
				_array[i] = src[i];
				i++;
			}
		};

	/*
	** -------------------------------- DESTRUCTOR --------------------------------
	*/

		~Array()
		{
			delete [] _array;
			_size = 0;
		};

	/*
	** --------------------------------- OVERLOAD ---------------------------------
	*/

		T		&operator[](std::size_t i)
		{
			if (i < 0 || i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		};

		const T		&operator[](std::size_t i) const
		{
			if (i < 0 || i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		};

		Array &		operator=( Array const & rhs )
		{
			if ( this != &rhs )
			{
				if (size() != rhs.size())
				{
					delete [] _array;
					_size = rhs.size();
					_array = new T[_size];
				}

				std::size_t	i = 0;

				while (i < rhs.size())
				{
					_array[i] = rhs[i];
					i++;
				}
			}
			return *this;
		};

	/*
	** --------------------------------- METHODS ----------------------------------
	*/
	std::size_t	size(void) const
	{
		return _size;
	};

	private:
		T			*_array;
		std::size_t	_size;

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & array )
{
	std::cout << "[";
	for (std::size_t i = 0; i < array.size(); i++)
	{
		o << array[i];
		if (i + 1 < array.size())
			std::cout << ", ";
	}
	std::cout << "]";
	return o;
}

#endif /* ********************************************************* ARRAY_HPP */
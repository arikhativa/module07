/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:42:23 by yrabby            #+#    #+#             */
/*   Updated: 2023/10/03 15:29:28 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T> class Array
{
  private:
    T *_array;
    ::size_t _size;

  public:
    /*
    ** ------------------------------- CONSTRUCTOR --------------------------------
    */

    Array() : _array(NULL), _size(0){};

    explicit Array(unsigned int n)
        : _array(new T[n]), _size(n){

                            };

    Array(Array const &src) : _array(new T[src.size()]), _size(src.size())
    {
        for (::size_t i = 0; i < size(); ++i)
            _array[i] = src[i];
    };

    /*
    ** -------------------------------- DESTRUCTOR --------------------------------
    */

    ~Array()
    {
        delete[] _array;
        _size = 0;
    };

    /*
    ** --------------------------------- OVERLOAD ---------------------------------
    */

    T &operator[](::size_t i)
    {
        if (i < 0 || i >= size())
            throw std::out_of_range("Index out of range");
        return _array[i];
    };

    const T &operator[](::size_t i) const
    {
        if (i < 0 || i >= size())
            throw std::out_of_range("Index out of range");
        return _array[i];
    };

    Array &operator=(Array const &rhs)
    {
        if (this != &rhs)
        {
            delete[] _array;

            _size = rhs.size();
            _array = new T[size()];

            for (::size_t i = 0; i < size(); ++i)
                _array[i] = rhs[i];
        }
        return *this;
    };

    /*
    ** --------------------------------- METHODS ----------------------------------
    */
    ::size_t size(void) const
    {
        return _size;
    };
};

template <typename T> std::ostream &operator<<(std::ostream &o, Array<T> const &array)
{
    std::cout << "[";
    for (::size_t i = 0; i < array.size(); i++)
    {
        o << array[i];
        if (i + 1 < array.size())
            std::cout << ", ";
    }
    std::cout << "]";
    return o;
}

#endif /* ********************************************************* ARRAY_HPP */

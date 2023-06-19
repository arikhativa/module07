/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:46 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/19 12:27:24 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
# include <iostream>

class Data
{
	public:
		Data() : _str(""), _int(0) {};
		Data(const std::string &str, int i) : _str(str), _int(i) {};
		~Data() {};
		std::string _str;
		int			_int;
};

std::ostream		&operator<<( std::ostream & o, const Data & data )
{
	o << "'" << data._str << "' - " << data._int;
	return o;
}

std::ostream		&operator<<( std::ostream & o, const Data * data )
{
	o << *data;
	return o;
}

int main()
{
	{
		Array<int> a(5);

		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		std::cout << a << std::endl;
	}
	{
		Array<Data> a(2);

		a[0] = Data("hey", 1);
		a[1] = Data("dudu", 2);
		std::cout << a << std::endl;
	}
	{
		Array<Data *> *ptr = new Array<Data *>(2);
		Array<Data *> &a = *ptr;

		a[0] = new Data("hey", 1);
		a[1] = new Data("dudu", 2);
		std::cout << a << std::endl;
		for (std::size_t i = 0; i < a.size(); i++)
			delete a[i];
		delete ptr;
	}
	
	return 0;
}

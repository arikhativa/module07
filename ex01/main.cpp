/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:46 by yrabby            #+#    #+#             */
/*   Updated: 2023/10/03 15:01:12 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <list>

// void list()
// {
//     std::list<int> l;

//     l.push_back(-1);
//     l.push_back(-2);
//     l.push_back(-3);

//     std::cout << "list: " << std::endl;
//     ::iter(l, 3, ::print);
//     std::cout << std::endl;
// }

void array_string()
{
    std::string array[] = {"asd", "hhh", "yoyo"};

    std::cout << "string: " << std::endl;
    ::iter(array, 3, ::print);
    std::cout << std::endl;
}

void array_long()
{
    long array[] = {1, 2, 3, 2147483648};

    std::cout << "long: " << std::endl;
    ::iter(array, 4, ::print);
    std::cout << std::endl;
}

void array_int()
{
    int array[5] = {-2147483648, 2, 3, 4, 2147483647};

    std::cout << "int: " << std::endl;
    ::iter(array, 5, ::print);
    std::cout << std::endl;
}

int main()
{
    array_int();
    array_long();
    array_string();
    return 0;
}

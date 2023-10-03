/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:46 by yrabby            #+#    #+#             */
/*   Updated: 2023/10/03 14:42:23 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void subject()
{
    int a = 2;
    int b = 3;

    ::swap(a, b);

    std::cout << "subject:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}

void swap()
{
    std::string s1 = "123";
    std::string s2 = "abc";

    std::cout << "swap:" << std::endl;
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;
    ::swap(s1, s2);
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;
}

void minmax()
{
    long s1 = 66;
    long s2 = -100;

    std::cout << "min:" << std::endl;
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;

    std::cout << "min: " << ::min(s1, s2) << std::endl;
    std::cout << "max: " << ::max(s1, s2) << std::endl;
}

int main()
{
    subject();
    swap();
    minmax();

    return 0;
}

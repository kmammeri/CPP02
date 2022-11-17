/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmammeri <kmammeri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:54:09 by kmammeri          #+#    #+#             */
/*   Updated: 2022/11/17 20:22:37 by kmammeri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"

int main( void ) {
// Fixed a(2.1f);
// Fixed b( 10 );
// Fixed c( 42.42f );
// Fixed d( b );

// std::cout << "b < c <=> " << b << " < " <<  c << " <=> " << (b < c) << std::endl;

// std::cout << "min(b, c) <=> min(" << b << ", " <<  c << ") = " << Fixed::min(b,c) << std::endl;

// std::cout << "max(b, c) <=> max(" << b << ", " <<  c << ") = " << Fixed::max(b,c) << std::endl;

// std::cout << "b + c <=> " << b << " + " <<  c << " = " << b + c << std::endl;

// std::cout << "b - c <=> " << b << " - " <<  c << " = " << b - c << std::endl;

// std::cout << "a * b <=> " << a << " * " <<  b << " = " << a * b << std::endl;

// std::cout << "b / a <=> " << b << " / " <<  a << " = " << b / a << std::endl;

// std::cout << "b++ <=> " << b << "++ " << " = " << b++ << std::endl;


Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;





return 0;}
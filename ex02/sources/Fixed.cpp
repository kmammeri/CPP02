/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmammeri <kmammeri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:31:46 by kmammeri          #+#    #+#             */
/*   Updated: 2022/11/17 20:25:09 by kmammeri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_number = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++(int)
{
	
	Fixed tmp = *this;
	this->_number += 1;
	return(tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_number -= 1;
	return(tmp);
}

Fixed Fixed::operator++()
{
	this->_number += 1;
	return(*this);
}

Fixed Fixed::operator--()
{
	this->_number -= 1;
	return(*this);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	// std::cout << "Comparison operator < called" << std::endl;
	if (this->_number < fixed._number)
		return (true);
	else
	 	return (false);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	// std::cout << "Comparison operator <= called" << std::endl;
	if (this->_number <= fixed._number)
		return (true);
	else
	 	return (false);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	// std::cout << "Comparison operator > called" << std::endl;
	if (this->_number > fixed._number)
		return (true);
	else
	 	return (false);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	// std::cout << "Comparison operator >= called" << std::endl;
	if (this->_number >= fixed._number)
		return (true);
	else
	 	return (false);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	// std::cout << "Comparison operator == called" << std::endl;
	if (this->_number == fixed._number)
		return (true);
	else
	 	return (false);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	// std::cout << "Comparison operator != called" << std::endl;
	if (this->_number != fixed._number)
		return (true);
	else
	 	return (false);
}

std::ostream& operator<<(std::ostream& os, Fixed const& number)
{
	os << number.toFloat();
	return (os);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return(a);
	else
	 	return(b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return(a);
	else
	 	return(b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	else
	 	return(b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return(a);
	else
	 	return(b);
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = number << _nbOfBits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(number * (1 << _nbOfBits));
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int Fixed::toInt(void) const
{
	return (this->_number >> _nbOfBits);
}

float Fixed::toFloat(void) const
{
	return (float(this->_number) / float(1 << _nbOfBits));
}

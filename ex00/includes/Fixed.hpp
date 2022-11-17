/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmammeri <kmammeri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:13:32 by kmammeri          #+#    #+#             */
/*   Updated: 2022/10/22 20:24:43 by kmammeri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed const &operator=(const Fixed &fixed);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	
	private:
		int	_number;
		const static int _nbOfBits = 8;
};

#endif
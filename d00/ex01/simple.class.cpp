/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 13:14:32 by ssalaues          #+#    #+#             */
/*   Updated: 2017/07/03 13:41:22 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample (void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

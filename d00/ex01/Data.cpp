/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:09:50 by ssalaues          #+#    #+#             */
/*   Updated: 2017/07/04 12:24:14 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.class.hpp"

People::People( void )
{
	this->data[0] = "first";
	this->data[1] = "last";
	this->data[2] = "nick";
	this->data[3] = "login";
	this->data[4] = "postal";
	this->data[5] = "email";
	this->data[6] = "number";
	this->data[7] = "bday";
	this->data[8] = "favMeal";
	this->data[9] = "underColor";
	this->data[10] = "darkSecret";
	return ;
}

~People::~People( void )
{
	return ;
}

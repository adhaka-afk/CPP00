/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:12:25 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/27 01:21:51 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : isInitialized(false) {}

void Contact::setAttribute(const std::string& attribute, const std::string& value)
{
	if (attribute == "FirstName")
		firstName = value;
	else if (attribute == "LastName")
		lastName = value;
	else if (attribute == "NickName")
		nickName = value;
	else if (attribute == "PhoneNumber")
		phoneNumber = value;
	else if (attribute == "DarkestSecret")
		darkestSecret = value;
}

void Contact::initializeOb()
{
	isInitialized = true;
}

std::string Contact::getAttribute(const std::string& attribute) const
{
	if (attribute == "FirstName")
		return firstName;
	else if (attribute == "LastName")
		return lastName;
	else if (attribute == "NickName")
		return nickName;
	else if (attribute == "PhoneNumber")
		return phoneNumber;
	else if (attribute == "DarkestSecret")
		return darkestSecret;
	return "";
}

bool Contact::isObInitialized() const
{
	return isInitialized;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:12:38 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/27 01:23:41 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <ostream>
#include <limits>
#include <iomanip>
#include <string>

class	PhoneBook{
private:
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int currentIndex;

public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void displayContacts() const;
	void searchContact() const;
};

#endif

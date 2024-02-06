/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:12:34 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/27 01:23:28 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

PhoneBook::~PhoneBook(){}

void PhoneBook::addContact()
{
	if (currentIndex < MAX_CONTACTS)
	{
		std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

		std::cout << "Provide First Name:";
		std::cin >> firstName;
		std::cout << "Provide Last Name:";
		std::cin >> lastName;
		std::cout << "Provide Nick Name:";
		std::cin >> nickName;
		std::cout << "Provide Phone Number:";
		std::cin >> phoneNumber;
		std::cout << "Provide Darkest Secret:";
		std::cin >> darkestSecret;

		contacts[currentIndex].setAttribute("FirstName", firstName);
		contacts[currentIndex].setAttribute("LastName", lastName);
		contacts[currentIndex].setAttribute("NickName", nickName);
		contacts[currentIndex].setAttribute("PhoneNumber", phoneNumber);
		contacts[currentIndex].setAttribute("DarkestSecret", darkestSecret);
		contacts[currentIndex].initializeOb();
		currentIndex++;
	}
	else
	{
		currentIndex = 0;
		addContact();
	}
}

void PhoneBook::displayContacts() const
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "==============================================" << std::endl;

	for (int a = 0; a < MAX_CONTACTS; a++)
	{
		if (contacts[a].isObInitialized())
		{
			std::string firstName = contacts[a].getAttribute("FirstName");
			std::string lastName = contacts[a].getAttribute("LastName");
			std::string nickName = contacts[a].getAttribute("NickName");

			if (firstName.length() > 10)
				firstName = firstName.substr(0, 9) + ".";
			if (lastName.length() > 10)
				lastName = lastName.substr(0, 9) + ".";
			if (nickName.length() > 10)
				nickName = nickName.substr(0, 9) + ".";

			std::cout << "|" << std::setw(10) << std::right << a + 1;
			std::cout << "|" << std::setw(10) << std::right << firstName;
			std::cout << "|" << std::setw(10) << std::right << lastName;
			std::cout << "|" << std::setw(10) << std::right << nickName;
			std::cout << "|" << std::endl;
		}
	}
}

void PhoneBook::searchContact() const
{
	if (currentIndex == 0)
	{
		std::cout << "Empty PhoneBook" << std::endl;
		return;
	}

	displayContacts();

	int index;
	while (true)
	{
		std::cout << "Provide index of the Contact" << std::endl;
		std::cin >> index;

		index--;

		if (std::cin.fail() || index < 0 || index >= MAX_CONTACTS || !contacts[index].isObInitialized())
		{
			std::cout << "Invalid index entry. Try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			std::cout << "Contact Details:" << std::endl;
			std::cout << "First Name: " << contacts[index].getAttribute("FirstName") << std::endl;
			std::cout << "Last Name: " << contacts[index].getAttribute("LastName") << std::endl;
			std::cout << "NickName: " << contacts[index].getAttribute("NickName") << std::endl;
			std::cout << "PhoneNumber: " << contacts[index].getAttribute("PhoneNumber") << std::endl;
			std::cout << "Darkest Secret: " << contacts[index].getAttribute("DarkestSecret") << std::endl;
			break;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:12:32 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/27 01:22:15 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;

	while (true)
	{
		std::cout << "Enter command (ADD || SEARCH || EXIT):\n" << std::flush;
		std::string cmd;
		std::cin >> cmd;

		if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH")
		{
			phoneBook.searchContact();
		}
		else if (cmd == "EXIT")
			break;
		else
		{
			std::cout << "Invalid input. Discarding Input" << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return (0);
}

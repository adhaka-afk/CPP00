/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:12:29 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/27 01:22:03 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	bool isInitialized;

public:
	Contact();

	void setAttribute(const std::string& attribute, const std::string& value);
	void initializeOb();

	std::string getAttribute(const std::string& attribute) const;
	bool isObInitialized() const;
};

#endif

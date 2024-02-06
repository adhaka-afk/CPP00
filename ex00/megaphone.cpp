/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:01:31 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/20 07:41:17 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int a = 1; a < argc; ++a)
		{
			for (int b = 0; argv[a][b] != '\0'; ++b)
				std::cout << static_cast<char>(std::toupper(argv[a][b]));
		}
		std::cout << std::endl;
	}
	return (0);
}


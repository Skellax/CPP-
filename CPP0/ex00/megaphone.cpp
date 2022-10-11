/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:48:12 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/16 14:14:43 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>


int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    }
    else
    {
        for (int i(1); i < ac; i++)
        {
            for (int j(0); j < (int)strlen(av[i]); j++)
            {
                av[i][j] = toupper(av[i][j]);
            }
			std::cout << av[i] << " ";
        }

        std::cout << "\n";
    }

	return 0;
}

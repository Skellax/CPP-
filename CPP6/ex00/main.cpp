/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:14:23 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/27 12:44:55 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int ac, char **av)
{
    if (ac < 2 || ac > 2)
        std::cout << RED << "ERROR : too law or too many arguments !" << std::endl;
    else
        ft_convert(av[1]);

        return 0;
}
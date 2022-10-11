/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:10:27 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/19 10:18:55 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *z =  new Zombie[N];
    for (int i(0); i < N; i++)
    { 
        z[i].getName(name);  
         std::cout << GRAY << "Zombie number : " << i << " ";
         z[i].announce();
    }
    return (z);
}

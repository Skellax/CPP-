/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 07:43:55 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/19 09:47:15 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#ifndef COLOR
#define COLOR

#define GREEN "\033[92m"
#define RED "\033[91m"
#define GRAY "\033[90m"

#endif

#include <iostream>
#include <string>

class Zombie
{
    private:
    std::string m_name;

    public:
    Zombie();
    Zombie (std::string name);
    ~Zombie();
    void announce();
    std::string getName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
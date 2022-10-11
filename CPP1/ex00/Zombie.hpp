/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:23:26 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/19 07:25:33 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#ifndef COLOR
#define COLOR

#define GREEN "\033[92m"
#define RED  "\033[91m"
#define GRAY "\033[90m"
#define YELLOW "\033[93m"

#endif

#include <iostream>
#include <string>

class Zombie
{
    private:
    std::string m_name;

    public:
     Zombie(std::string name);
     Zombie();
     ~Zombie();
     void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
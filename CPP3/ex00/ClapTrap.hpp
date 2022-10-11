/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:31:19 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 08:53:19 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CLAPTRAP
#define DEF_CLAPTRAP

//LIBRAIRIES 

#include <iostream>
#include <string>

//COLORS

#define DEFAULT "\033[39m"
#define GREEN "\033[92m"
#define RED "\033[91m"
#define YELLOW "\033[93m"
#define MAGENTA "\033[95m"

//CLASSE 

class ClapTrap
{
    private:

    std::string name;
    int hp;
    unsigned int ep;
    unsigned int att;

    public:


    ClapTrap();
    ClapTrap(std::string nom);
    ClapTrap(ClapTrap const& i);
    ClapTrap &operator=(ClapTrap const& i);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void showStatus(void) const; 
    std::string getName();
    unsigned int getAtt();
};

#endif
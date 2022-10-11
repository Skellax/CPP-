/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:33:45 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/20 09:34:24 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_WEAPON
#define DEF_WEAPON

#ifndef COLOR
#define COLOR

#define DEFAULT "\033[39m"
#define GREEN "\033[92m"
#define RED "\033[91m"

#endif

#include <iostream>
#include <string>

class Weapon
{
    private:
    std::string m_type;

    public:
    Weapon(std::string type);
    Weapon();
    ~Weapon();
    void setType(std::string type);
    std::string const& getType();    
};

#endif
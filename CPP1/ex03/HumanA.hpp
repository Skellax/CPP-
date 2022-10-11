/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:40:44 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/20 09:30:49 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMAN_A
#define DEF_HUMAN_A

#include "Weapon.hpp"

class HumanA
{
    private:
    std::string m_name;
    Weapon& m_weapon;

    public:
    HumanA(std::string name, Weapon &type);
    ~HumanA();
    void attack();
};


#endif
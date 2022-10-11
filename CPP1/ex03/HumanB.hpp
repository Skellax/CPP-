/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:20:18 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/20 09:30:51 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMAN_B
#define DEF_HUMAN_B

#include "Weapon.hpp"

class HumanB
{
    private:
    std::string m_name;
    Weapon *m_weapon;

    public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& type);
    void attack();


};

#endif

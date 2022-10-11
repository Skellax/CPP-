/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:55:46 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 08:55:53 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SCAVTRAP
#define DEF_SCAVTRAP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public :

    ScavTrap();
    ScavTrap(std::string nom);
    ScavTrap(ScavTrap const& i);
    ScavTrap &operator=(ScavTrap const& i);
    ~ScavTrap();
    void guardGate(void);
    void showStatus(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:19:40 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/01 10:11:42 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_DIAMONDTRAP
#define DEF_DIAMONDTRAP

// LIBRAIRIES

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
    private:

    std::string name;

    public:
    
    DiamondTrap();
    DiamondTrap(std::string nom);
    DiamondTrap(DiamondTrap const& i);
    DiamondTrap &operator=(DiamondTrap const& i);
    ~DiamondTrap();
    void showStatus(void) const ;
    virtual void attack(const std::string& target);
    void whoAmI(void);


};

#endif
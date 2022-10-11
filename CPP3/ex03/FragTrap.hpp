/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:17:28 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/01 09:59:31 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FRAGTRAP
#define DEF_FRAGTRAP

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
    public :

    FragTrap();
    FragTrap(std::string nom);
    FragTrap(FragTrap const& i);
    FragTrap &operator=(FragTrap const& i);
    ~FragTrap();
    void showStatus(void) const;
    void highFivesGuys(void);

};

#endif
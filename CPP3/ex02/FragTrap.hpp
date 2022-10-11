/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:02:48 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 09:58:17 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FRAGTRAP
#define DEF_FRAGTRAP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
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


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:53:14 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 12:54:15 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


//FUNCTIONS----------------------------------------------

Form* Intern::makeForm(std::string const& name, std::string const&  target)
{
    Form* f;
    std::string tab[3];
    int count = 0;

    tab[0] = "shrubbery creation";
    tab[1] = "robotomy request";
    tab[2] = "presidential pardon";

    for (int i(0); i < 3; i++)
    {
        if (tab[i] == name)
            break;
        count++;
    }

    switch(count)
    {
        case 0:
            f = new Shrubbery(target);
            break;
        case 1:
            f = new Robotomy(target);
            break;
        case 2:
            f = new Presidential(target);
            break;
        default:
            std::cout << RED << "ERROR: undefined name formulary ! " << std::endl;
            f = NULL;
    }
    return (f);
}
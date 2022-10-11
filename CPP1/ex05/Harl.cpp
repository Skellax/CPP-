/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:07:58 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/21 14:17:08 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << GREEN << "Hello Harl !" << std::endl;
    return ;
}

Harl::~Harl()
{
    std::cout << RED << "Good bye Harl !" << std::endl;
    return ;
}

void Harl::debug(void)
{
    std::cout << DEFAULT << "[DEBUG]" << std::endl;
    std::cout << GREEN << "I love having extra bacon for my" << std::endl; 
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl; 
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << DEFAULT << "[INFO]" << std::endl;
    std::cout << BLUE << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << DEFAULT << "[WARNING]" << std::endl;
    std::cout << YELLOW << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working" << std::endl;
    std::cout << "here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << DEFAULT << "[ERROR]" << std::endl;
    std::cout << RED << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string tab[4];
    void (Harl:: *ptr[4]) (void);

    tab[0] = "DEBUG";
    tab[1] = "INFO";
    tab[2] = "WARNING";
    tab[3] = "ERROR";

    ptr[0] =  &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

    if (level == tab[0] || level == tab[1] || level == tab[2] || level == tab[3])
    {
        for (int i(0); i < 4; i++)
        {
            if (level == tab[i])
               (this->*ptr[i])();
        }
    }
    else
    {
        std::cout << DEFAULT << "Error with the level !" <<std::endl;
    }
}

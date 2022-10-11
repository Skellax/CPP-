/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:12:22 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/21 14:20:01 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << GREEN << "Hello Harl" << std::endl;
    return ;
}

Harl::~Harl()
{
    std::cout << RED << "Goodbye Harl" << std::endl;
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
    void (Harl:: *ptr[4])(void);
    std::string tab[4];
    int size = sizeof(tab) / sizeof(tab[0]);
    int input(0);

    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

    tab[0] = "DEBUG";
    tab[1] = "INFO";
    tab[2] = "WARNING";
    tab[3] = "ERROR";

    for (int i(0); i < size; i++)
    {
        if (level == tab[i])
            break;
        input++;
    }

    switch(input)
    {
        case 0:
            for (int i(0); i < size; i++)
            {
                (this->*ptr[i])();
                std::cout << DEFAULT << "--------------------------------" << std::endl;
            }
            break;
        case 1:
            for (int i(1); i < size; i++)
            {
                (this->*ptr[i])();
                std::cout << DEFAULT << "--------------------------------" << std::endl;
            }
            break;
        case 2:
            for (int i(2); i < size; i++)
            {
                (this->*ptr[i])();
                std::cout << DEFAULT << "--------------------------------" << std::endl;
            }
            break;
        case 3:
            for (int i(3); i < size; i++)
            {
                (this->*ptr[i])();
            }
            break;
        default:
            std::cout << DEFAULT << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
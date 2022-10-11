/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 08:43:00 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/16 14:15:11 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



int main()
{
    int on_off(0);
    std::string res;
    PhoneBook list;

    list.introduction();
    std::cout << "\n";

    while (on_off == 0)
    {

        std::cout << BLACK << " Commands :  \n" << std::endl;
        std::cout << GREEN << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << BLACK << "Your choise :";
        getline(std::cin, res);
        if (res == "ADD")
        {
            list.addContact();
        }
        else if (res == "SEARCH")
        {
            list.showContact();
        }
        else if (res == "EXIT")
        {
            on_off = 1;
        }
        else
        {
            std::cout << RED << " INVALID COMMAND : try again !" << std::endl;
            std::cout << "\n";
        }
    }
    std::cout << "\n";
    std::cout << MAGENTA << std::endl;
    std::cout << " Bye !!! (･‿･)ﾉ " << std::endl;

	return 0;
}

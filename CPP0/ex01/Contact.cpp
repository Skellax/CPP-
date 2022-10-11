/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:06:55 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/15 08:57:38 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact()
{

}

void Contact::addFirstName()
{
    while (m_firstName.empty())
    {
        std::cout << "Your firstname : ";
        getline(std::cin, m_firstName);
        std::cout << "\n";
    } 
    return ;
}

void Contact::addLastName()
{
    while (m_lastName.empty())
    {
        std::cout << "Your lastname : ";
        getline(std::cin, m_lastName);
        std::cout << "\n";
    }
    return ;
}

void Contact::addNickName()
{
    while (m_nickName.empty())
    {
        std::cout << "Your nickname : ";
        getline(std::cin, m_nickName);
        std::cout << "\n";
    }
    return ;    
}

void Contact::addPhoneNumber()
{
    while (m_phoneNumber.empty())
    {
        std::cout << "Your phone number : ";
        getline(std::cin, m_phoneNumber);
        std::cout << "\n";
    }
    return ;  
}

void Contact::addDarkSecret()
{
    while (m_darkSecret.empty())
    {
        std::cout << "Your dark secret : ";
        getline(std::cin, m_darkSecret);
        std::cout << "\n";
    }
    return ;
}

void Contact::showFirstName() const
{  
    if (m_firstName.length() > 10)
    {
        std::cout << m_firstName.substr(0, 9) << ".";
    }
    else
    {
        int len = 10 - m_firstName.length();
        for (int i(0); i < len; i++)
        {
            std::cout << " ";
        }
        std::cout << m_firstName;
    }
}

void Contact::showLastName() const
{
    if (m_lastName.length() > 10)
    {
        std::cout << m_lastName.substr(0,9) << ".";
    }
    else
    {
        int len = 10 - m_lastName.length();
        for (int i(0); i < len; i++)
        {
            std::cout << " ";
        }
        std::cout << m_lastName;
    }
}

void Contact::showNickName() const
{
    if (m_nickName.length() > 10)
    {
        std::cout << m_nickName.substr(0,9) << ".";
    }
    else
    {
        int len = 10 - m_nickName.length();
        for (int i(0); i < len; i++)
        {
            std::cout << " ";
        }
        std::cout << m_nickName;
    }
}

void Contact::showAll() const
{
    std::cout << "Firstname : " << m_firstName << std::endl;
    std::cout << "Lastname : " << m_lastName << std::endl;
    std::cout << "Nickname : " << m_nickName << std::endl;
    std::cout << "Phone Number : " << m_phoneNumber << std::endl;
    std::cout << "Dark Secret : " << m_darkSecret << std::endl;
}

void Contact::clear()
{
  m_firstName.clear();
  m_lastName.clear();
  m_nickName.clear();
  m_phoneNumber.clear();
  m_darkSecret.clear();
}
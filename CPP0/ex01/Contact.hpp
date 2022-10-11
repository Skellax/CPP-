/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:30:42 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/15 08:54:27 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
#define DEF_CONTACT

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_phoneNumber;
    std::string m_darkSecret;

    public:
    Contact();
    void addFirstName();
    void addLastName();
    void addNickName();
    void addPhoneNumber();
    void addDarkSecret();
    void showFirstName() const;
    void showLastName() const;
    void showNickName() const;
    void showAll() const;
    void clear();
};

#endif
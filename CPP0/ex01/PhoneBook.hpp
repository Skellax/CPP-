/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:20:56 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/15 08:50:01 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include "Contact.hpp"

#ifndef COLOR
#define COLOR

#define RED "\033[91m"
#define GREEN "\033[92m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"
#define BLACK "\033[90m"

#endif

class PhoneBook{
    
    private:
    Contact m_list[8];
    int     m_nbContact;
    int     m_flag;
    int     m_len;

    public:
    PhoneBook();
    void introduction() const;
    void addContact();
    void showContact() const;
};

#endif
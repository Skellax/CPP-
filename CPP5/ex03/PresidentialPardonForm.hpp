/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:26:34 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:39 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PRESIDENTIAL
#define DEF_PRESIDENTIAL

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//PROTOTYPE

class Bureaucrat;
class Form;

class Presidential : public Form
{
    public:

    Presidential(std::string const& target);
    Presidential(Presidential const& i);
    Presidential& operator=(Presidential const& i);
    virtual ~Presidential();
    void execute(Bureaucrat const& executor) const;

    class NotSignedExeption : public std::exception
    {
        public:
        
        const char * what() const throw()
        {
            return (RED"ERROR: Form Presidential is not signed !");
        }

    };
};

#endif
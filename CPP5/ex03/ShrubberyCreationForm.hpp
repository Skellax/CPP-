/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:07:02 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:24:05 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SHRUBBERY
#define DEF_SHRUBBERY

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
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

class Shrubbery : public Form
{
    public:

    Shrubbery(std::string const& target);
    Shrubbery(Shrubbery const& i);
    Shrubbery& operator=(Shrubbery const& i);
    virtual ~Shrubbery();
    void execute(Bureaucrat const& executor) const;

    class NotSignedExeption : public std::exception
    {
        public :

        const char * what() const throw()
        {
            return (RED"ERROR: Form Shrubbery is not signed !");
        }
    };
};

#endif
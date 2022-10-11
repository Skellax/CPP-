/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:42:04 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:53 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ROBOTOMY_REQUEST
#define DEF_ROBOTOMY_REQUEST

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//PROTOTYPE

class Bureaucrat;
class Form;

class Robotomy : public Form
{
    public:

    Robotomy(std::string const& target);
    Robotomy(Robotomy const& i);
    Robotomy& operator=(Robotomy const& i);
    virtual ~Robotomy();
    void execute(Bureaucrat const& executor) const;

    class NotSignedExeption : public std::exception
    {
        public:

        const char * what() const throw()
        {
            return (RED"ERROR: Form Robotomy is not signed !");
        }
    };   
};

#endif
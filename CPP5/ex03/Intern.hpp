/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:24:32 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 12:36:17 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_INTERN
#define DEF_INTERN

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//PROTOTYPE

class Bureaucrat;
class Form;
class Presidential;
class Shrubbery;
class Robotomy;


class Intern
{
    public:

    Form* makeForm(std::string  const& name, std::string const&  target);

};


#endif
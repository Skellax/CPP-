/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:35:29 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/13 15:41:59 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//CONSTRUCTORS-----------------------------------------------------------------

Shrubbery::Shrubbery(std::string const& target) 
{
    this->name = target;
    this->grade_s = 145;
    this->grade_e = 137;
    this->isSigned = false;

    std::cout << GREEN << "Form Shrubbery is created !" << std::endl;

    return;
}

Shrubbery::Shrubbery(Shrubbery const& i)
{
    std::cout << YELLOW << "Form Shrubbery is cloned !" << std::endl;
    *this = i;

    return;
}

//OPERATORS----------------------------------------------------------------------

Shrubbery& Shrubbery::operator=(Shrubbery const& i)
{
    std::cout << BLUE << "operator Shrubbery is created !" << std::endl;
    if (this != &i)
    {
        this->name = i.name;
        this->grade_s = i.grade_s;
        this->grade_e = i.grade_e;
        this->isSigned = i.isSigned;
    }

    return (*this);
}

//DESTUCTORS--------------------------------------------------------------------------

Shrubbery::~Shrubbery()
{
    std::cout << RED << "Form Shrubbery is destroyed !" << std::endl;

    return;
}

//FUNCTIONS-----------------------------------------------------------------------------

void Shrubbery::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->isS() == false)
            throw(Shrubbery::NotSignedExeption());
        if (executor.getGrade() > this->getGradeE())
            throw(Shrubbery::GradeTooLowExeption());
        else
        {
            std::ofstream of(this->getName()+"_shruberry");

            if (of)
            {
                of << GREEN <<" oooooooooooooooooooo " << '\n';
                of <<         "oo                  oo" << '\n';
                of <<         "o                    o" << '\n';
                of <<         "o                    o" << '\n';
                of <<         " ooo              ooo " << '\n';
                of <<         "    oo           oo   " << '\n';
                of << RED   <<"      |         |     " << '\n';
                of <<         "      |         |     " << '\n';
                of <<         "      |         |     " << '\n';
                of <<         "      |         |     " << '\n';
                of <<         "     /__________|     " << '\n'; 

            }
            else
            {
                std::cout << RED << "ERROR: can't open the file !" << std::endl;
            }

        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return;
}
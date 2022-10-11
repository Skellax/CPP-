/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:38:51 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:30 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//CONSTRUCTORS---------------------------------------------------------------

Presidential::Presidential(std::string const& target)
{
    this->name = target;
    this->grade_s = 25;
    this->grade_e = 5;
    this->isSigned = false;

    std::cout << GREEN << "Form Presidential is created !" << std::endl;
}

Presidential::Presidential(Presidential const& i)
{
    std::cout << YELLOW << "Form Presidential is cloned !" << std::endl;
    *this = i;

    return ;
}

//OPERATORS-----------------------------------------------------------------------

Presidential& Presidential::operator=(Presidential const& i)
{
    std::cout << BLUE << "operator Presidential is created !" << std::endl;
    if (this != &i)
    {
        this->name = i.name;
        this->grade_s = i.grade_s;
        this->grade_e = i.grade_e;
        this->isSigned = i.isSigned;
    }

    return (*this);
}

//DESTRUCTORS-----------------------------------------------------------------------

Presidential::~Presidential()
{
    std::cout << RED << "Presidential Form is destroyed !" << std::endl;

    return;
}

//Functions-------------------------------------------------------------------------


void Presidential::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->isS() == false)
            throw(Presidential::NotSignedExeption());
        if (executor.getGrade() > this->getGradeE())
            throw(Presidential::GradeTooLowExeption());
        else
        {
            std::cout << DEFAULT << this->getName() << " forgived by Zaphod Beeblebrox !" << std::endl;
        }


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return ;    
}
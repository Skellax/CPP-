/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:01:52 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/13 15:30:40 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//CONSTRUCTOR-------------------------------------------------------

Bureaucrat::Bureaucrat() : name("Steve"), grade(50)
{

    std::cout << GREEN << "Welcome to the standard new Bureaucrat" << std::endl;

    return;
}

Bureaucrat::Bureaucrat(std::string nom, int niveau) : name(nom)
{
    try
    {
        if (niveau > 150)
            throw (Bureaucrat::GradeTooLowExeption());
        else if (niveau < 1)
            throw (Bureaucrat::GradeTooHighExeption());
        else
        {
            grade = niveau;
            std::cout << GREEN << "Welcome to the new Bureaucrat" << std::endl;

            return;

        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
     
}

Bureaucrat::Bureaucrat(Bureaucrat const& i)
{
    std::cout << YELLOW << "Bureaucrat is cloned !" << std::endl;
    (*this = i);

    return;
}

//OPERATOR-----------------------------------------------------------

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& i)
{
    std::cout << BLUE << "Bureaucrat operator called !" << std::endl;
    if (this != &i)
    {
        this->name = i.name;
        this->grade = i.grade;
    }

    return (*this);
}

//DESTRUCTOR-----------------------------------------------------------

Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat is fired !" << std::endl;

    return;
}

//FUNCTIONS------------------------------------------------------------

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::signForm(Form const& f)
{
    if (f.isS() == true)
    {
        std::cout << DEFAULT << this->getName() << " signed " << f.getName() << std::endl;
    }
    else
    {
        std::cout << RED << this->getName() << " couldn 't sign " << f.getName() \
        << " because his grade is too low !" << std::endl;
    }
}

void Bureaucrat::executeForm(Form const& f)
{
    if (f.isS() == false)
    {
        std::cout << RED << this->getName() << " couldn 't execute " << f.getName() \
        << " because the form is not signed !" << std::endl;
    }
    else if (f.isS() == true && (this->getGrade() < f.getGradeE()))
    {
        std::cout << DEFAULT << this->getName() << " executed " << f.getName() << std::endl;
    }
    else
    {
         std::cout << RED << this->getName() << " couldn 't execute " << f.getName() \
        << " because his grade is too low !" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& i)
{
      try
    {
        if (i.getGrade() > 150)
            throw (Bureaucrat::GradeTooLowExeption());
        else if (i.getGrade() < 1)
            throw (Bureaucrat::GradeTooHighExeption());
        else
        {
            os <<  DEFAULT << i.getName() << ", bureaucrat grade " << i.getGrade();            
        }
    }
        catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 

    return (os);   
}

//Operators += AND -= ----------------------------------------------

void Bureaucrat::operator+=(Bureaucrat const& i)
{
    this->grade += i.grade;
}

void Bureaucrat::operator-=(Bureaucrat const& i)
{
    this->grade -= i.grade;
}

//INCREMENTATION (Inversed) ---------------------------------------

Bureaucrat& Bureaucrat::operator--(void)
{
    this->grade += 1;
    return (*this);
}

Bureaucrat Bureaucrat::operator--(int)
{
    Bureaucrat tmp = *this;
    this->grade += 1;
    return (tmp);
}

//DECREMENTATION (Inversed) ------------------------------------------------

Bureaucrat& Bureaucrat::operator++(void)
{
    this->grade -= 1;
    return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
    Bureaucrat tmp = *this;
    this->grade -= 1;
    return (tmp);
}



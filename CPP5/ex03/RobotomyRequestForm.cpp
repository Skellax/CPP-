/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:10:44 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:46 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//CONSTRUCTORS--------------------------

Robotomy::Robotomy(std::string const& target)
{
    this->name = target;
    this->grade_s = 72;
    this->grade_e = 45;
    this->isSigned = false;

    std::cout << GREEN << "Form Robotomy created !" << std::endl;

    return;
}

Robotomy::Robotomy(Robotomy const& i)
{
    std::cout << YELLOW << "Form Robotomy is cloned !" << std::endl;
    *this = i;

    return;
}

//OPERATORS-------------------------------------

Robotomy& Robotomy::operator=(Robotomy const& i)
{
    std::cout << BLUE << "Robotomy operator created !" << std::endl;
    if (this != &i)
    {
        this->name = i.name;
        this->grade_s = 72;
        this->grade_e = 42;
        this->isSigned = i.isSigned;
    }

    return (*this);
}

//DESTRUCTORS---------------------------------------

Robotomy::~Robotomy()
{
    std::cout << RED << "Form Robotory is destroyed !" << std::endl;

    return;
}

//FUNCTIONS-----------------------------------------

void Robotomy::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->isS() == false)
            throw(Robotomy::NotSignedExeption());
        if (this->grade_e < executor.getGrade())
            throw(Robotomy::GradeTooLowExeption());
        else
        {
            std::cout << DEFAULT << "*sound Drill drdrdrdrdrdrd !!!!!!*" <<std::endl;
            sleep(5);
            srand(time(NULL));
            int nb = rand() % 10 + 1; 
            //std::cout << nb << std:: endl;
            if (nb <= 5)
                std::cout << GREEN << this->getName() << " is fulled Robotised !!!!" << std::endl;
            else if (nb > 5)
                std::cout << RED << "Operations failed !!!" << std::endl;
        }


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
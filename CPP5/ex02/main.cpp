/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:13:39 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:18:31 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
//----------------------------------TEST AVEC LE FORMULAIRE SHRUBERRY--------------------

    std::cout << BLUE << "-----test form_Shruberry-----" << std::endl;

    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    Bureaucrat b1("George", 100);
    Bureaucrat b2("Raoul", 150);

    std::cout << DEFAULT << "---------------------------" << std::endl;
    
    Form* f1 = new Shrubbery("jardin");

    std::cout << b1 << std::endl;
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << b2 << std::endl;

    std::cout << DEFAULT << "---------------------------" << std::endl;

    std::cout << *f1 << std::endl;

    std::cout << DEFAULT << "---------------------------" << std::endl;

    std::cout << std::endl;

    f1->execute(b1);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b1.executeForm(*f1);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    f1->beSigned(b2);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b2.signForm(*f1);
    std::cout << DEFAULT << "---------------------------" << std::endl;


    std::cout << std::endl;

    f1->beSigned(b1);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b1.signForm(*f1);
    std::cout << DEFAULT << "---------------------------" << std::endl;

    std::cout << std::endl;

    f1->execute(b2);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b2.executeForm(*f1);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    f1->execute(b1);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b1.executeForm(*f1);
    std::cout << DEFAULT << "---------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << std::endl;

    delete f1;

    std::cout << std::endl;

//-----------------------------TEST_FORMULAIRE ROBOTOMY----------------------------------------------

std::cout << BLUE << "-----test form_Robotomy-----" << std::endl;

    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    Bureaucrat b3("Jaques Bouillon", 41);
    Bureaucrat b4("Ingrid", 46);

    std::cout << DEFAULT << "---------------------------" << std::endl;

    Form* f2 = new Robotomy("biouman");

    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << b3 << std::endl;
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << b4 << std::endl;
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    f2->beSigned(b1);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b1.signForm(*f2);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    f2->beSigned(b4);
    std::cout << DEFAULT << "---------------------------" << std::endl;

    std::cout << std::endl;

    f2->beSigned(b4);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b4.signForm(*f2);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;


    f2->execute(b3);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b3.executeForm(*f2);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << std::endl;

    delete f2; 

    std::cout << std::endl; 

//----------------------------TEST_FORM_PRESIDENTIAL--------------------------------


std::cout << BLUE << "-----test form_Presidential-----" << std::endl;

    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    Bureaucrat b5("Marcel Patulachi", 3);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    

    Form *f3 = new Presidential("macron");
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << b5 << std::endl;
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << *f3 << std::endl;
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;
    

    f3->execute(b5);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b5.executeForm(*f3);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    f3->beSigned(b5);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b5.signForm(*f3);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    f3->execute(b5);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    b5.executeForm(*f3);
    std::cout << DEFAULT << "---------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << std::endl;

    delete f3; 

    std::cout << std::endl;
}
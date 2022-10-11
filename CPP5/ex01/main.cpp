/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:42:21 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/13 08:26:27 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << BLUE << "----------TEST 1----------" << std::endl;
    std::cout << std::endl;

    std::cout << DEFAULT << "test avec un bureaucrat de rang 15 et un formulaire qui demande le rang 15 pour etre signe" << std::endl;
    std::cout << std::endl; 

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
      
    std::cout << std::endl;

    Bureaucrat b1("Ludo", 15);


    std::cout << DEFAULT << "---------------" << std::endl;
    Form f1("formulaire_inserer_nom", 15, 15);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;

    std::cout << b1 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << f1 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << std::endl;

    f1.beSigned(b1);
    b1.signForm(f1);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;
    std::cout << f1 << std::endl;


    std::cout << std::endl;

    std::cout << BLUE << "----------TEST 2----------" << std::endl;
    std::cout << std::endl;

    std::cout << DEFAULT << "test avec un bureaucrat de rang 5 et un formulaire qui demande le rang 1 pour etre signe" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
      
    std::cout << std::endl; 

    Bureaucrat b2("Jean-Mich-Much", 5);
    std::cout << DEFAULT << "---------------" << std::endl;
    Form f2("formulaire_beta", 1, 1);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;

    std::cout << b2 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << f2 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << std::endl;

    f2.beSigned(b2);
    b2.signForm(f2);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;


    std::cout << BLUE << "----------TEST 3----------" << std::endl;
    std::cout << std::endl;

    std::cout << DEFAULT << "Creation de 2 formulaire de rank 0 et 151" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    Form f3("epsilon", 0, 0);
    std::cout << DEFAULT << "---------------" << std::endl;
    Form f4 ("delta", 151, 151);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;
        

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << std::endl;

}
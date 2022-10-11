/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:34:56 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/02 11:12:20 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{

    //TEST N*1-----------------------------------------------------------------------------------------------------

    std::cout << CYAN << "----------------------------------test_1------------------------------------" << std::endl;
           std::cout << "                    ---------------------------------                       " << std::endl;

    std::cout <<std::endl;

    std::cout << GREEN << "------------------------------OPERATORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    
    const Animal* meta = new Animal();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    const Animal* j = new Dog();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    const Animal* i = new Cat();
    std::cout << DEFAULT << "-------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << DEFAULT << j->getType() << " " << std::endl;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    i->makeSound();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    j->makeSound();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    meta->makeSound();

    std::cout << std::endl;

    std::cout << RED << "------------------------------DESTRUCTORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    delete meta;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    delete j;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    delete i;
    std::cout << DEFAULT << "-------------------------" << std::endl;

    //TEST N*2-------------------------------------------------------------------------------------------------------

    std::cout << CYAN << "----------------------------------test_2------------------------------------" << std::endl;
           std::cout << "                    ---------------------------------                       " << std::endl;

    std::cout <<std::endl;

    std::cout << GREEN << "------------------------------OPERATORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    const WrongAnimal* beta = new WrongAnimal();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    const WrongAnimal* y = new WrongCat();

    std::cout << std::endl;

    std::cout << DEFAULT << y->getType() << " " << std::endl;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    std::cout << DEFAULT << beta->getType() << " " << std::endl;

    std::cout << std::endl;

    beta->makeSound();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    y->makeSound();

    std::cout << std::endl;

    std::cout << RED << "------------------------------DESTRUCTORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    delete beta;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    delete y;

    return 0;
}
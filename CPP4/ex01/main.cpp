/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 08:28:47 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/07 12:32:49 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
     //TEST N*1-----------------------------------------------------------------------------------------------------

    std::cout << CYAN << "----------------------------------test_1------------------------------------" << std::endl;
           std::cout << "                    ---------------------------------                       " << std::endl;

    std::cout << std::endl;

    std::cout << GREEN << "------------------------------OPERATORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    const Animal* j = new Dog();
     std::cout << DEFAULT << "-------------------------" << std::endl;
    const Animal* i = new Cat();

    std::cout << std::endl;

    j->makeSound();
    std::cout << DEFAULT << "-------------------------" << std::endl;
    i->makeSound();

    std::cout << std::endl;

    std::cout << RED << "------------------------------DESTRUCTORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    delete j;
    std::cout << DEFAULT << "-------------------------" << std::endl;
    delete i;

    //TEST N*2--------------------------------------------------------------------------------------------------

  std::cout << CYAN << "----------------------------------test_2------------------------------------" << std::endl;
     std::cout << "                    ---------------------------------                       " << std::endl;

       std::cout << std::endl;

       std::cout << DEFAULT << "Tableau d'animaux de 10 !" << std::endl;

       std::cout << std::endl;

        std::cout << GREEN << "------------------------------OPERATORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

       std::cout << std::endl;

       Animal* z[10];

      

    std::cout << std::endl;

     for (int i(0); i < 5; i++)
     {
       z[i] = new Dog();
       std::cout << DEFAULT << "-------------------------" << std::endl;
     }
     
     for (int i(5); i < 10; i++)
     {
       z[i] = new Cat;
       std::cout << DEFAULT << "-------------------------" << std::endl;
     }

     std::cout << std::endl;

     std::cout << YELLOW << "--------------------ANIMALS_CRYING-------------------------------" << std::endl;

     std::cout << std::endl;

       for (int i(0); i < 10 ; i++)
       {
              z[i]->makeSound();
              std::cout << DEFAULT << "-------------------------" << std::endl;
       }

       std::cout << std::endl;

       std::cout << RED << "------------------------------DESTRUCTORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

       std::cout << std::endl;

       for (int i(0); i < 10; i++)
       {
              delete z[i];
              std::cout << DEFAULT << "-------------------------" << std::endl;
       }


      std::cout << std::endl;


       return 0;

       
}
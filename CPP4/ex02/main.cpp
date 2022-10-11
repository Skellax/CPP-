/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 08:28:47 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/07 09:45:54 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
  std::cout << GREEN << "------------------------------OPERATORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;

    std::cout << std::endl;

    //CREATION D'UNE CLASSE DOG ET CAT------------------------------------------------------

    Animal* dog = new Dog();

    std::cout << DEFAULT << "------------------------------------" << std::endl;

    Animal* cat = new Cat();

    std::cout << std::endl;

    dog->makeSound();

    std::cout << DEFAULT << "------------------------------------" << std::endl;

    cat->makeSound(); 

    std::cout << std::endl;

    std::cout << RED << "------------------------------DESTRUCTORS-----------------------" << std::endl;
             std::cout << "                 -------------------------------              " << std::endl;
             std::cout << "                      --------------------                    " << std::endl;


    delete dog;

    std::cout << DEFAULT << "------------------------------------" << std::endl;

    delete cat;

    std::cout << DEFAULT << "------------------------------------" << std::endl;


    std::cout << std::endl;

    

    //Creation d'une classe animal qui devrait renvoyer une erreur ! car impossible à être instancié

    //Animal animal;

    std::cout << CYAN << "Autre test-------------------------------------" << std::endl;

    std::cout << std::endl;

    Animal* ptr(0);

    std::cout << "-------------------------------------" << std::endl;

    Cat test;

    std::cout << "-------------------------------------" << std::endl;

    ptr = &test;

    std::cout << "-------------------------------------" << std::endl;

    std::cout << DEFAULT << ptr->getType() << std::endl;

    std::cout << "-------------------------------------" << std::endl;

}   
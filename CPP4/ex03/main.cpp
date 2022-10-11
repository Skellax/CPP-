/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:27:56 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 14:30:44 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
    //TEST1-----------------------------------------------------------------------
    std::cout << BLUE << "test 1 ---------------------------------" << std::endl;

    std::cout << std::endl;


    IMateriaSource* src = new MateriaSource();
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src->learnMateria(new Ice());
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src->learnMateria(new Cure());

    std::cout << std::endl;

    ICharacter* me = new Character("me");
    std::cout << DEFAULT << "------------------------------" << std::endl;
    std::cout << std::endl;

    AMateria* tmp;
    std::cout << DEFAULT << "------------------------------" << std::endl;
    tmp = src->createMateria("ice");
    std::cout << DEFAULT << "------------------------------" << std::endl;
    me->equip(tmp);
    std::cout << DEFAULT << "------------------------------" << std::endl;
    tmp = src->createMateria("cure");
    std::cout << DEFAULT << "------------------------------" << std::endl;
    me->equip(tmp);
    std::cout << DEFAULT << "------------------------------" << std::endl;

    std::cout << std::endl;

    ICharacter* bob = new Character("bob");
    std::cout << DEFAULT << "------------------------------" << std::endl;

    std::cout << std::endl;

    me->use(0, *bob);
    std::cout << DEFAULT << "------------------------------" << std::endl;
    me->use(1, *bob);
    std::cout << DEFAULT << "------------------------------" << std::endl;

    delete bob;
    delete me;
    delete src;

    std::cout << DEFAULT << "------------------------------" << std::endl;
    std::cout << std::endl;

    //TEST2
    std::cout << BLUE << "test 2 ---------------------------------" << std::endl;
    std::cout << std::endl;
    
    IMateriaSource* src2 =  new MateriaSource();
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src2->learnMateria(new Cure());
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src2->learnMateria(new Cure());
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src2->learnMateria(new Ice());
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src2->learnMateria(new Ice());
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src2->learnMateria(new Ice());
    std::cout << DEFAULT << "------------------------------" << std::endl;

    std::cout << std::endl;

    delete src2 ;

    //TEST3
    std::cout << BLUE << "test 3 ---------------------------------" << std::endl;
    std::cout << std::endl;

    IMateriaSource* src3 = new MateriaSource();
    std::cout << DEFAULT << "------------------------------" << std::endl;
    src2->learnMateria(new Ice());
    std::cout << DEFAULT << "------------------------------" << std::endl;

    std::cout << std::endl;

    AMateria* tmp2;
    std::cout << DEFAULT << "------------------------------" << std::endl;
    tmp2 = src3->createMateria("fire");
    std::cout << DEFAULT << "------------------------------" << std::endl;
    tmp2 = src3->createMateria("ice");
    std::cout << DEFAULT << "------------------------------" << std::endl;

    ICharacter* me2 = new Character("me");
    std::cout << DEFAULT << "------------------------------" << std::endl;

    std::cout << std::endl;

    me2->equip(tmp2);
    std::cout << DEFAULT << "------------------------------" << std::endl;
    std::cout << std::endl;

    ICharacter* Aeris = new Character("Aeris");
    std::cout << DEFAULT << "------------------------------" << std::endl;
    std::cout << std::endl;

    me2->use(0, *Aeris);
    std::cout << DEFAULT << "------------------------------" << std::endl;
    me2->unequip(0);
    std::cout << DEFAULT << "------------------------------" << std::endl;
    me2->use(0, *Aeris);
    std::cout << DEFAULT << "------------------------------" << std::endl;
    std::cout << std::endl;

    delete src3;
    delete me2;
    delete Aeris;
 
    return 0;
}
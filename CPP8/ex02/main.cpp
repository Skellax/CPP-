/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:48:40 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/09 10:43:25 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << YELLOW << "test stack" << std::endl;
    std::cout << std::endl;

    MutantStack<int> mstack;

    std::cout << DEFAULT << "Ajout de 2 nombres 5 et 17" << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;

    mstack.push(5);
    mstack.push(17);

    std::cout << GREEN << "Afficher le dernier nombre" << std::endl;
    std::cout << DEFAULT << mstack.top() << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;


    std::cout << DEFAULT << "Supprime le nombre 17 de la stack" << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;
    mstack.pop();

    std::cout << GREEN << "Affiche la taille de la stack" << std::endl;   
    std::cout << DEFAULT << mstack.size() << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;


    std::cout << DEFAULT << "ajout des nombres 3, 5, 737 et 0" << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << DEFAULT << "Creation des 2 iterateurs" << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << GREEN << "afichage de la stack" << DEFAULT << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;
   

    std::stack<int> s(mstack);
    
    std::cout << GREEN << "Verification si iterateur implémenté" << DEFAULT << std::endl;
    
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << std::endl;
    std::cout << YELLOW << "------------" << std::endl;
    std::cout << std::endl;

    std::cout << YELLOW << "Fin de test stack" << DEFAULT << std::endl;

    std::cout << YELLOW << "----test list----" << DEFAULT << std::endl;
    std::cout << std::endl;

    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);

    std::cout << mlist.back() << std::endl;
    std::cout << YELLOW << "------------" << DEFAULT << std::endl;
    std::cout << std::endl;

    mlist.pop_back();

    std::cout << mlist.size() << std::endl;
    std::cout << YELLOW << "------------" << DEFAULT << std::endl;
    std::cout << std::endl;

    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    std::list<int>::iterator it2 = mlist.begin();
    std::list<int>::iterator itt2 = mlist.end();

    ++it2;
    --it2;

    while (it2 != itt2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::cout << YELLOW << "------------" << DEFAULT << std::endl;
    std::cout << std::endl;

    std::cout << YELLOW << "fin de test (list)" << std::endl;



     



    return 0;
}
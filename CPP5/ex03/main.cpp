/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:13:39 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 13:35:24 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    std::cout << YELLOW << "Formulary valid : (shrubbery creation) (robotomy request) (presidential pardon)" << std::endl;
    std::cout << std:: endl;

    Intern someRandomIntern;
    Form* rrf;

    rrf =  someRandomIntern.makeForm("presidential pardon", "Bender");

    if (rrf != NULL)
    {
        std::cout << DEFAULT << *rrf << std::endl;
        std::cout << std:: endl;

        Bureaucrat b1("Boss", 1);
        std::cout << std::endl;
        rrf->beSigned(b1);
        b1.signForm(*rrf);
        std::cout << std::endl;
        rrf->execute(b1);
        b1.executeForm(*rrf);
        std::cout << std::endl;
    }
    delete rrf;

}
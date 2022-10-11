/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:29:25 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/25 08:07:00 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main(void)
{

    std::cout << RED << "-------------------test1----------------------" << DEFAULT << std::endl;
    
    Fixed a;

    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "Incrementation de a avec ++a puis a++" << std::endl;

    std::cout << a <<std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl; 
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << YELLOW << "____________________AFFICHE B_____________" << std::endl;

    std::cout << DEFAULT << b << std:: endl;

    std::cout << YELLOW << "__________________AFFICHE MAX_______________________" << std::endl;

    std::cout << DEFAULT << Fixed::max(a, b) << std::endl;

    std::cout << RED << "-------------------test2----------------------" << DEFAULT << std::endl;

    std::cout << "Decrementation de a avec --a puis a--" << std::endl;

    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl; 
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    std::cout << YELLOW << "__________________AFFICHE MIN_______________________" << std::endl;

    std::cout << DEFAULT << Fixed::min(a, b) << std::endl;


     std::cout << RED << "-------------------test3----------------------" << DEFAULT << std::endl;

     Fixed c (10);
     Fixed d (12);
     Fixed e (2);

     std::cout << "valeur de c = 10 , valeur de d = 12, valeur de e = 2" << std::endl;

      std::cout << YELLOW << "__________________COMPARAISON_______________________" << std::endl;

      std::cout << DEFAULT << " c == e ?" << std::endl; 

     c == e ? std::cout << "Oui ils sont egaux" << std::endl : std::cout << "Non ils sont differents" << std::endl;

      std::cout << DEFAULT << " c != e ?" << std::endl;

      c != e ? std::cout << "Oui ils sont differents" << std::endl : std::cout << "Non ils sont egaux" << std::endl;

      std::cout << DEFAULT << " c < d ?" << std::endl;

      c < d ? std::cout << "c plus petit que d" << std::endl : std::cout << "c plus grand que d" << std::endl;

      std::cout << DEFAULT << " d > e ?" << std::endl;

     d > e ? std::cout << "d plus grand que e" << std::endl : std::cout << "d plus petit que e" << std::endl;

      

      std::cout << YELLOW << "__________________CALCUL_______________________" << std::endl;

      std::cout << DEFAULT << " c + d = " << c + d << std::endl;
      
      std::cout << DEFAULT << " c - d = " << c - d << std::endl;

      std::cout << DEFAULT << "c * e = " << c * e << std::endl;

      std::cout << DEFAULT << " d / e = " << d / e << std::endl;


    std::cout << RED << "-------------------test4----------------------" << DEFAULT << std::endl;

     Fixed f (7.35f);
     Fixed g (7.35f);
     Fixed h (14.27f);

     std::cout << "valeur de f = 7.35 , valeur de g = 7.35, valeur de h = 14.27" << std::endl;

      std::cout << YELLOW << "__________________COMPARAISON_______________________" << std::endl;

      std::cout << DEFAULT << " f == g ?" << std::endl; 

     f == g ? std::cout << "Oui ils sont egaux" << std::endl : std::cout << "Non ils sont differents" << std::endl;

      std::cout << DEFAULT << " g != h ?" << std::endl;

      f != h ? std::cout << "Oui ils sont differents" << std::endl : std::cout << "Non ils sont egaux" << std::endl;

      std::cout << DEFAULT << " f < h ?" << std::endl;

      f < h ? std::cout << "f plus petit que h" << std::endl : std::cout << "f plus grand que h" << std::endl;

      std::cout << DEFAULT << " h > g ?" << std::endl;

     h > g ? std::cout << "h plus grand que g" << std::endl : std::cout << "h plus petit que g" << std::endl;

      

      std::cout << YELLOW << "__________________CALCUL_______________________" << std::endl;

      std::cout << DEFAULT << " h + g = " << h + g << std::endl;
      
      std::cout << DEFAULT << " h - f = " << h - f << std::endl;

      std::cout << DEFAULT << "h * f = " << h * f << std::endl;

      std::cout << DEFAULT << " f / g = " << f / g << std::endl;

      









}
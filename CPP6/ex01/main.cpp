/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:10:32 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/28 09:11:13 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
   std::cout << BLUE << "----------test---------" << std::endl;
   std::cout << std::endl;


   Data d1(1, "bonjour");
   uintptr_t t1 = 0;

   std::cout << RED << "---Before serialize---" << std::endl;
   std::cout << BLUE << "d1(i) = " << DEFAULT << d1.i << std::endl;
   std::cout << BLUE << "d1(data) = " << DEFAULT << d1.data << std::endl;
   std::cout << BLUE << "t1 : " << DEFAULT << t1 << std::endl;
   std::cout << YELLOW << "-----------------------------" << std::endl;

   t1 = serialize(&d1);
   std::cout << GREEN << "---After serialize---" << std::endl;
   std::cout << BLUE << "t1 : " << DEFAULT << t1 << std::endl;
   std::cout << YELLOW << "-----------------------------" << std::endl;
   std::cout << std::endl;

   Data *d2 = new Data(0, "test");

   std::cout << RED << "---Before deserialize---" << std::endl;
   std::cout << BLUE << "d2(i) = " << DEFAULT << d2->i << std::endl;
   std::cout << BLUE << "d2(data) = " << DEFAULT << d2->data << std::endl;
   std::cout << YELLOW << "-----------------------------" << std::endl;
   std::cout << std::endl;

   d2 = deserialize(t1);
   std::cout << GREEN << "---After deserialize---" << std::endl;
   std::cout << BLUE << "d2(i) = " << DEFAULT << d2->i << std::endl;
   std::cout << BLUE << "d2(data) = " << DEFAULT << d2->data << std::endl;
   std::cout << YELLOW << "-----------------------------" << std::endl;
   std::cout << std::endl;
  
}
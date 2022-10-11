/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:40:53 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/28 10:42:55 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_BASE
#define DEF_BASE

//LIBRAIRIES

#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//CLASSES

class Base
{
    public:
    virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:10:03 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/02 10:57:45 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ANIMAL
#define DEF_ANIMAL


//LIBRAIRIES

#include <string>
#include <iostream>


//COLOR 

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"
#define CYAN "\033[96m"
#define WHITE "\033[97m"

class Animal
{
    protected:

    std::string type;

    public:

    Animal();
    Animal(Animal const& i);
    Animal &operator=(Animal const& i);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const;

};

class Dog :  public Animal
{
    public:

    Dog();
    Dog(Dog const& i);
    Dog &operator=(Dog const& i);
    virtual ~Dog();
    virtual std::string getType() const;
    virtual void makeSound() const;
};

class Cat :  public Animal
{
    public:

    Cat();
    Cat(Cat const& i);
    Cat &operator=(Cat const& i);
    virtual ~Cat();
    virtual std::string getType() const;
    virtual void makeSound() const;
};


#endif


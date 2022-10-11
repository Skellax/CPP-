/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:10:03 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/05 10:47:57 by mfuhrman         ###   ########.fr       */
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

class  Animal
{
    protected:

    std::string type;

    public:

     Animal();
     Animal(Animal const& i);
     Animal &operator=(Animal const& i);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const = 0;

};

class Brain 
{
    protected:

    std::string ideas[100];

    public:

    Brain();
    Brain(Brain const& i);
    Brain &operator=(Brain const& i);
    virtual ~Brain();

};

class Dog :  public virtual Animal
{
    private:

    Brain *brain;

    public:

    Dog();
    Dog(Dog const& i);
    Dog &operator=(Dog const& i);
    virtual ~Dog();
    virtual std::string getType() const;
    virtual void makeSound() const;
};

class Cat :  public virtual Animal
{
    private:

    Brain *brain;

    public:

    Cat();
    Cat(Cat const& i);
    Cat &operator=(Cat const& i);
    virtual ~Cat();
    virtual std::string getType() const;
    virtual void makeSound() const;
};



#endif


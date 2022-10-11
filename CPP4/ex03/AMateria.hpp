/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:47:25 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 09:28:57 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_MATERIA
#define DEF_MATERIA

//LIBRAIRIES

#include <iostream>
#include <string>
#include "ICharacter.hpp"


//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"
#define CYAN "\033[96m"

//PROTOTYPE

class ICharacter;
class AMateria;
class Ice;
class Cure;

//CLASS

class AMateria
{
    protected:

    std::string _type;

    public:

    AMateria(std::string const& type);
    AMateria();
    AMateria(AMateria const& i);
    AMateria& operator=(AMateria const& i);
    virtual ~AMateria();
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual std::string getType();
};

class Ice : public AMateria 
{

    public:

    Ice(std::string const& type);
    Ice();
    Ice(Ice const& i);
    Ice& operator=(Ice const& i);
    virtual ~Ice();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    virtual std::string getType();

};

class Cure : public AMateria
{
    public:

    Cure(std::string const& type);
    Cure();
    Cure(Cure const& i);
    Cure& operator=(Cure const& i);
    virtual ~Cure();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    virtual std::string getType();
};


#endif
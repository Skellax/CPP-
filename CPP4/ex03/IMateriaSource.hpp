/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:17:51 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 12:07:12 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_IMATERIA
#define DEF_IMATERIA

//LIBRAIRIES

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"

//PROTOTYPE

class AMateria;
class IMateriaSource;
class MateriaSource;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:

    AMateria *box2[4];

    public : 

    MateriaSource();
    MateriaSource(MateriaSource const& i);
    MateriaSource& operator=(MateriaSource const& i);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};




#endif
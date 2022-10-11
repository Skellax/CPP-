/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:23:18 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 09:22:51 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CHARACTER
#define DEF_CHARACTER

//LIBRAIRIES

#include "AMateria.hpp"

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"


//PROTOTYPE

class AMateria;
class ICharacter;
class Character;


class ICharacter
{ 
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0; 
        virtual void use(int idx, ICharacter& target) = 0;

};

class Character : public ICharacter
{
    private:

    std::string name;
    AMateria* box[4];

    public:

    Character();
    Character(std::string const nom);
    Character(Character const& i);
    Character& operator=(Character const& i);
    virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
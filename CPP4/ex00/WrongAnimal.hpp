/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:27:10 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/02 11:04:36 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_WRONG_ANIMAL
#define DEF_WRONG_ANIMAL

//LIBRAIRIES

#include <string>
#include <iostream>

//COLORS
 
#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"
#define CYAN "\033[96m"
#define WHITE "\033[97m"

class WrongAnimal
{
    protected:

    std::string type;


    public:

    WrongAnimal();
    WrongAnimal(WrongAnimal const& i);
    WrongAnimal &operator=(WrongAnimal const& i);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:

    WrongCat();
    WrongCat(WrongCat const& i);
    WrongCat &operator=(WrongCat const& i);
    virtual ~WrongCat();
    std::string getType() const;
    void makeSound() const ;
};



#endif 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:49:29 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/09 10:07:18 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_MUTANT
#define DEF_MUTANT

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <list>
#include <algorithm>


//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//CLASS

template <class T>
class MutantStack : public std::stack<T>
{
    private:

    public:
    MutantStack() : std::stack<T>()
    {
        return;

    }
    MutantStack<T>& operator=(MutantStack const &cln)
    {
        if (this != &cln)
        {
            std::stack<T>::c = cln.c;
        }
        return (*this);
    }
    ~MutantStack()
    {
        return;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return (std::stack<T>::c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:13:44 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/09 08:22:55 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*****************************************************
 *      CONSTRUCTORS                                 *
 *****************************************************/

Span::Span()
{
    _n = 0;

    std::cout << GREEN << "Operator by default called !" << std::endl;

    return; 
}

Span::Span(unsigned int n) : _n(n)
{

    std::cout << GREEN << "Operator with parameter called !" << std::endl;

    return;
}

Span::Span(Span const& cln) : _n(cln._n), _tab(cln._tab)
{
    std::cout << BLUE << "Constructor by copy is called" << std::endl;
}

/****************************************************
 *             OPERATOR                             *
 * **************************************************/

Span& Span::operator=(Span const& cln)
{
    std::cout << YELLOW << "operator= called !" << std::endl;
    if (this != &cln)
    {
       _n = cln._n;
       _tab = cln._tab;
    }

    return (*this);
}

/******************************************************
 *               DESTRUCTOR                           *
 * ****************************************************/

Span::~Span()
{
    std::cout << RED << "destructor called !" << std::endl;
}

/********************************************************
 *               FUNCTIONS                              *
 * ******************************************************/

void Span::addNumber(int nb)
{
    
    if (_tab.size() < _n)
        _tab.push_back(nb);
    else
        throw(Span::outOfRange());
 
}

void Span::print()
{
    int i = -1;
    for (std::vector<int>::iterator it = _tab.begin(); it != _tab.end(); it++)
        std::cout << BLUE << "valeur " << ++i << ": " << DEFAULT << *it << std::endl;

    return;
}

int Span::longestSpan()
{ 
    if (_tab.size() > 1)
    { 
        int max = *std::max_element(_tab.begin(), _tab.end());
        int min = *std::min_element(_tab.begin(), _tab.end());
        int lo = max - min;         
        return (lo);
    }
    else
        throw(Span::errorDist());        
}

int Span::shortestSpan()
{ 
    if (_tab.size() > 1)
    { 
        int max = *std::max_element(_tab.begin(), _tab.end());
        int min = *std::min_element(_tab.begin(), _tab.end());
        int sh = max - min;

        for (std::vector<int>::iterator at = _tab.begin() + 1; at != _tab.end(); at++ )
        {
           for (std::vector<int>::iterator it = _tab.begin(); it != _tab.end(); it++)
            {
                if ((*it - *at) < 0 && (*it != *at))
                {
                  if (sh > *at - *it)
                        sh = *at - *it;
                }
                else if (sh > *it - *at && (*it != *at))
                    sh = *it - *at;
            }
        }
        return (sh);    
    }
    else
        throw(Span::errorDist());
}

void Span::addRange(unsigned int begin, unsigned int end)
{
       if (_n < begin || _n  < end)
        std::cout << RED << "ERROR: out of limits" << std::endl;

        else
        {
            for (int i(_tab.size()); i < (int)end; i++)
                addNumber(0);

            std::generate(_tab.begin() + begin, _tab.begin() + end + 1, Generate);
        }
}

int Generate()
{
    return((rand() % 10000));
}
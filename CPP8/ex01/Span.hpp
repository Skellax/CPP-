/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:07:08 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/07 12:57:42 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SPAN
#define DEF_SPAN

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//CLASSE
class Span
{
    private:

    unsigned int _n;
    std::vector<int>  _tab;

    public:
    Span();
    Span(unsigned int n);
    Span(Span const& cln);
    Span& operator=(Span const& cln);
    virtual ~Span();
    void addNumber(int nb);
    void addRange(unsigned int begin, unsigned int end);
    void print();
    int shortestSpan();
    int longestSpan();
    class outOfRange : public std::exception
    {
        public:
        const char * what() const throw()
        {
            return (RED"Error : Out of range !");
        }
    };
    class errorDist : public std::exception
    {
        public:
        const char * what() const throw()
        {
            return (RED"Error : can't find the distance :( !");
        }
    };
};

int Generate();

#endif
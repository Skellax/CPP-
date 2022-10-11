/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:38:36 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:13 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_DEF
#define FORM_DEF

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//PROTOTYPE

class Bureaucrat;

//CLASS

class Form
{
    protected:

    std::string name;
    int grade_s;
    int grade_e;
    bool isSigned;

    public:

    Form();
    Form(std::string _name, int _grade_s, int _grade_e);
    Form(Form const& i);
    Form& operator=(Form const& i);
    virtual ~Form();
    std::string getName() const;
    virtual int getGradeS() const;
    virtual int getGradeE() const;
    virtual bool isS() const;
    virtual void beSigned(Bureaucrat const& i);
    virtual void execute(Bureaucrat const& executor) const = 0;

    class GradeTooHighExeption : public std::exception
    {
    
    public:
    const char * what() const throw()
    {
        return (RED"Error: Grade too high !\n");

    }
    };

    class GradeTooLowExeption : public std::exception
    {
    
    public:
    const char * what() const throw()
    {
        return (RED"Error: Grade too low !\n");
    }

    };


};

std::ostream& operator<<(std::ostream& os, Form const& i);

#endif
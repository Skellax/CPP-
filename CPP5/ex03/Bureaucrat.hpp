/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:10:31 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:02 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_BUREAUCRAT
#define DEF_BUREAUCRAT

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

//COLORS


#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//PROTOTYPE

class Form;

//CLASS

class Bureaucrat{

    private:

    std::string name;
    int grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string nom, int niveau);
    Bureaucrat(Bureaucrat const& i);
    Bureaucrat& operator=(Bureaucrat const& i);
    virtual ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void operator+=(Bureaucrat const& i);
    void operator-=(Bureaucrat const& i);
    Bureaucrat& operator++(void);
    Bureaucrat operator++(int);
    Bureaucrat& operator--(void);
    Bureaucrat operator--(int);
    void signForm(Form const& f);
    void executeForm(Form const& f);
    
    class GradeTooHighExeption : public std::exception
    {
    
    public:
    const char * what() const throw()
    {
        return (RED"ERROR: Grade too high !\n");

    }
    };

    class GradeTooLowExeption : public std::exception
    {
    
    public:
    const char * what() const throw()
    {
        return (RED"ERROR: Grade too low !\n");
    }

    };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& i);




#endif 
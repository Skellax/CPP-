/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 07:56:55 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/21 14:17:27 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HARL
#define DEF_HARL

// COLOR 

#define DEFAULT "\033[90m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

#include <iostream>
#include <string>

class Harl
{
    private:
    
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:

    Harl();
    ~Harl();
    void complain(std::string level);
    
};

#endif
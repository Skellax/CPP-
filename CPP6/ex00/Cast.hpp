/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:16:21 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/27 12:35:28 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CAST
#define DEF_CAST

//LIBRAIRES

#include <iostream>
#include <string>
#include <math.h>
#include <limits.h>
#include<iomanip>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//FUNCTIONS

void ft_convert(char *av);
void ft_char(double const &d_dboule, std::string const& s_string);
void ft_int(double const &d_double, std::string  const& s_string);
void ft_float(double const &d_double, std::string const& s_string);
void ft_double (double const &d_double);



#endif
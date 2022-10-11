/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:50:22 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/28 09:00:00 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_DATA
#define DEF_DATA

//LIBRAIRIES

#include <iostream>
#include <string>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//STRUCTURE

struct Data
{
    int i;
    std::string data;
    Data(int i, std::string data);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);



#endif
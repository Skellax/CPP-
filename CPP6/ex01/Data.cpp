/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:56:55 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/28 08:59:55 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);

    return (raw);
}

Data* deserialize(uintptr_t raw)
{
    Data* ptr;

    ptr = reinterpret_cast<Data*>(raw);

    return (ptr);
}

Data::Data(int i, std::string data) : i(i), data(data)
{
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:37:27 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/29 08:47:40 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

void ft_convert(char *av)
{
    std::string s_string;
    double d_double;

    int n_decimal;
    int whole_part;
    int i;

    d_double = std::strtod(av, NULL);
    s_string = std::to_string(d_double);

    if (d_double == 0 && av[0] != '0' && av[1] != '\0')
    {
        std::cout << RED << "Error Unknown input !" << std::endl;
    }
    else
    {
        if (d_double == 0 && av[1] == '\0')
            d_double = static_cast<double>(av[0]);
    
        i = 0;
        while (av[i] != '.' && av[i])
            i++;
        if (av[i] == '.')
        {
            n_decimal = i;
            i++;
        while (av[i] >= '0' && av[i] <= '9')
        {
            i++;
        }
        n_decimal = i - n_decimal - 1;
        if (n_decimal > 4)
            n_decimal = 4;
        }
        else
            n_decimal = 1;

        whole_part = 0;
        while (s_string[whole_part] != '.' && s_string[whole_part])
            whole_part++;
        if (s_string[0] == '-')
            whole_part--;
        if (whole_part < 7)
            std::cout << DEFAULT << std::fixed << std::setprecision(n_decimal);

        ft_char(d_double, s_string);
        ft_int(d_double, s_string);
        ft_float(d_double, s_string);
        ft_double(d_double);
    }
}

void ft_char(double const &d_double, std::string const& s_string)
{
    char c_char;

    if (d_double < std::numeric_limits<char>::min() || d_double > std::numeric_limits<char>::max())
    {
        std::cout << RED << "ERROR : Overflow !" << std::endl;
    }
    else if ((d_double >= 32 && d_double <= 47) || (d_double >= 57 && d_double <= 126))
    {
        c_char = static_cast<char>(d_double);
        std::cout << BLUE << "char : " << DEFAULT << c_char << std::endl;
    }
    else if (!s_string.find("nan") || !s_string.find("inf") \
    || !s_string.find("+inf") || !s_string.find("-inf") \
    || !s_string.find("+nan") || !s_string.find("-nan"))
    {
        std::cout << RED << "ERROR : char impossible" << std::endl;
    }
    else
        std::cout << RED << "ERROR : char Non displayable" << std::endl;
}

void ft_int(double const& d_double, std::string const& s_string)
{
    int i_int;

    if (d_double < std::numeric_limits<int>::min() || d_double > std::numeric_limits<int>::max())
    {
        std::cout << RED << "ERROR : Overflow !" << std::endl;
    }
    else if (!s_string.find("nan") || !s_string.find("inf") \
    || !s_string.find("+inf") || !s_string.find("-inf") \
    || !s_string.find("-nan") || !s_string.find("+nan"))
    {
        std::cout << RED << "ERROR : int impossible" << std::endl;

    }
    else if (d_double == 48)
    {
       std::cout << BLUE << "int : " << DEFAULT << 0 << std::endl; 
    }
    else
    {
        i_int = static_cast<int>(d_double);
        std::cout << BLUE << "int : " << DEFAULT << i_int << std::endl;
    }
}

void ft_float(double const& d_double, std::string const& s_string)
{
    float f_float;

    
    if (!s_string.find("inf") || !s_string.find("+inf"))
        std::cout << BLUE << "float : " << DEFAULT << "inff" << std::endl;
    else if (!s_string.find("-inf"))
        std::cout << BLUE << "float : " << DEFAULT << "-inff" << std::endl;
    else if (!s_string.find("+nan") || !s_string.find("-nan"))
        std::cout << BLUE << "float : " << DEFAULT << "nanf" << std::endl;
    else if (d_double < std::numeric_limits<float>::min() || d_double > std::numeric_limits<float>::max())
    {
        std::cout << RED << "ERROR : Overflow !" << std::endl;
    }
    else if (d_double == 48)
    {
        std::cout << BLUE << "float : " << DEFAULT <<  "0.0f" << std::endl;
    }
    else
    {
        f_float = static_cast<float>(d_double);
        std::cout << BLUE << "float : " << DEFAULT << f_float << "f" << std::endl;
    }

}

void ft_double(double const& d_double)
{
    if (d_double == 48)
    {
       std::cout << BLUE << "double : " << DEFAULT << 0.0 << std::endl; 
    }
    else
        std::cout << BLUE << "double : " << DEFAULT << static_cast<double>(d_double) << std::endl;
}
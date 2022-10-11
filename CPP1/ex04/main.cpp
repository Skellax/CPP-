/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:15:23 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/20 14:04:36 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>       
#include <iostream>    
#include <sstream>
#include <fstream>

int main(int ac, char **av)
{ 
    int flag = 1;

    if (ac != 4 || std::strlen(av[1]) == 0)
    {
        std::cout << "ERROR with arguments !" << std :: endl;
        return (1);
    }
    std::string name(av[1]);
    std:: string s1(av[2]);
    std:: string s2(av[3]);
    
    size_t found(0);

    std::ifstream in;
    std::ofstream out;
    std::stringstream ss;
    std::string s;

    name.append(".replace");

    in.open(av[1]);
    if (in.fail())
    {
        std::cout << "Fail open file " << std::endl;
        return (1);
    }
    out.open(name, std::ofstream::out);
    if (out.fail())
    {
        std::cout << "Fail open file" << std::endl;
        return (1);
    }
    ss << in.rdbuf();
    s = ss.str();

    while (flag)
    {
        found = s.find(s1, found);
        if (found == std::string::npos)
            flag = 0;
        else
        {
            s.erase(found, s1.length());
            s.insert(found, s2);
            found += s2.length();
        }
    }
    out << s;
    in.close();
    out.close();
    return (0);
}
 
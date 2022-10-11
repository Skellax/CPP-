/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:35:47 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/03 10:24:09 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ARRAY
#define DEF_ARRAY

//LIBRAIRIES

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

template<typename T>
class Array
{
    private:

    T  *_array;
    std::size_t _size;
   

    public:
    Array();   
    Array(unsigned int n);
    Array(Array<T> const& cln);
    Array& operator=(Array<T> const &cln);
    T& operator[](int idx) const;
    virtual ~Array();
    class InvalidArray : public std::exception
    {
        public:
        const char * what() const throw()
        {
            return (RED"invalid index !");
        }
    };
    std::size_t size() const;
    void print() const;
};

/*********************************\
|   CONSTRUCTORS                  |
\*********************************/

    template<typename T>
    Array<T>::Array()
    {
        _array = new T[0];
        _array = nullptr;
        _size = 0;

        std::cout << GREEN << "Constructor Default is called !" << std::endl;
        return;
    }

    template<typename T>
    Array<T>::Array(unsigned int n)
    {
        _size = n;
        _array = new T[this->_size];
        for (std::size_t i = 0; i < _size; i++)
            _array[i] = i;

        std::cout << GREEN << "Constructor is called" << std::endl;
    }

    template<typename T>
    Array<T>::Array(Array<T> const& cln) : _array(new T[cln._size]), _size(cln._size)
    {
        for (std::size_t i = 0; i < cln._size; i++)
            _array[i] = cln._array[i];

        std::cout << BLUE << "Constructor by copy is called" << std::endl;
    }

/*********************************\
|   OPERATOR                      |
\*********************************/

    template< typename T >
    Array<T>& Array<T>::operator=(Array<T> const &cln)
    {
        std::cout << YELLOW << "operator= is called" << std::endl;
        if (this != &cln)
        {
            delete[] _array;
            _size = cln._size;
            _array = new T[_size];
            for (std::size_t i(0); i < _size; i++)
                _array[i] = cln._array[i];
        }

        
        return (*this);
    }


    template<typename T>
    T& Array<T>::operator[](int idx) const
    {
        try
        {
            if (idx < 0 || idx >= (int)_size)
                throw(Array<T>::InvalidArray());
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        
        return (_array[idx]);
    }
    
/*********************************\
|   DESTRUCTOR                    |
\*********************************/

    template<typename T>
    Array<T>::~Array()
    {
        delete[] _array;

        std::cout << RED << "Destructor is called " << std::endl;
    }

/*********************************\
|   FUNCTIONS                     |
\*********************************/

    template<typename T>
    std::size_t Array<T>::size() const
    {
        return (_size);
    }

    template<typename T>
    void Array<T>::print() const
    {
        for (std::size_t i = 0; i < _size; i++)
            std::cout << BLUE << "array[" << i << "] = " << DEFAULT << _array[i] << std::endl; 
    }



#endif
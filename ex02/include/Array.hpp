/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:42 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/02 15:10:18 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> 
class Array {
	private:
		unsigned int _size;
		T* array;
	public:
		// Exception class
		class OutOfBoundsException : public std::exception {
			public:
			const char* what() const throw();
		};
		
		// Constructors and destructor
		Array();
		Array(unsigned int n);
		Array(Array<T> const &other);
		Array<T>& operator=(Array<T> const &other);
		~Array();
		
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif

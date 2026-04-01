/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:42 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/01 17:58:23 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> 
class Array {
	private:
		unsigned int size;
		T* data;
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &other);
		Array<T>& operator=(Array<T> const &other);
		~Array();

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int getSize() const;
};

#include "Array.tpp"

#endif

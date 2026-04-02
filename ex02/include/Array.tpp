/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:42 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/02 15:32:14 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

// Exception
template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return "Index out of bounds";
}

template <typename T>
Array<T>::Array() : _size(0), array(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), array(new T[n]()) {}

template <typename T>
Array<T>::Array(Array<T> const &other) : _size(other._size), array(new T[other._size]()) {
	for (unsigned int i = 0; i < _size; i++)
		array[i] = other.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &other) {
	if (this != &other) {
		delete[] array;
		_size = other._size;
		array = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			array[i] = other.array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	if (array)
		delete[] array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw OutOfBoundsException();
	return array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size)
		throw OutOfBoundsException();
	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

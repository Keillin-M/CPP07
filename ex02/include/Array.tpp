/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:42 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/01 17:57:09 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array() : size(0), data(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : size(n), data(new T[n]()) {}

template <typename T>
Array<T>::Array(Array<T> const &other) : size(other.size), data(new T[other.size]()) {
	for (unsigned int i = 0; i < size; i++)
		data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &other) {
	if (this != &other) {
		delete[] data;
		size = other.size;
		data = new T[size]();
		for (unsigned int i = 0; i < size; i++)
			data[i] = other.data[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= size)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= size)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}

template <typename T>
unsigned int Array<T>::getSize() const {
	return size;
}

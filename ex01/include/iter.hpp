/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:42 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/01 16:14:45 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

template <typename T, typename F> 
void iter(T* array, size_t length, F f) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);	
}

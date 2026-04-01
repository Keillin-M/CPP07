/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:45:43 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/01 15:48:10 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> void swap(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

template <typename T> T max(const T& x, const T& y) {
	return (x > y ? x : y);
}

template <typename T> T min(const T& x,const T& y) {
	return (x < y ? x : y);
}

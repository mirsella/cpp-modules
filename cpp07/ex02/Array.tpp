/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:10:12 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/15 12:10:19 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(): _array(new T[0]()), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(Array const &src): _array(new T[src.size()]()), _size(src.size()) {
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs) {
	if (this == &rhs)
		return *this;
	if (_size != rhs.size())
	{
		delete[] _array;
		_array = new T[rhs.size()]();
		_size = rhs.size();
	}
	for (unsigned int i = 0; i < rhs.size(); i++)
		_array[i] = rhs[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n) const {
	if (n >= _size)
		throw Array::OutOfBoundsException();
	return _array[n];
}

template <typename T>
unsigned int	Array<T>::size() const {
	return _size;
}

template <typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw() {
	return "Array index out of bounds";
}

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) {
	*this = src;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* template <typename T> */
/* MutantStack<T>::iterator MutantStack<T>::after() { */
/* 	return this->c.after(); */
/* } */

/* template <typename T> */
/* MutantStack<T>::iterator MutantStack<T>::begin() { */
/* 	return this->c.begin(); */
/* } */

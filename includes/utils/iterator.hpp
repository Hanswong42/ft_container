
#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <cstddef>
#include <iterator>

namespace	ft{
   
template <
	class Category, 
	class T,
    class Distance = std::ptrdiff_t,
    class Pointer = T*,
    class Reference = T&
> struct Iterator {

	typedef Category iterator_category;
	typedef T value_type;
	typedef Distance difference_type;
	typedef Pointer pointer;
	typedef Reference reference;
	
};

template<class Iter >
struct iterator_traits {
	
	typedef typename Iter::difference_type		difference_type;
	typedef typename Iter::iterator_category	iterator_category;
	typedef typename Iter::value_type			value_type;
	typedef typename Iter::pointer				pointer;
	typedef typename Iter::reference			reference;

};

template<class T>
struct iterator_traits<T*> {
	
	typedef std::ptrdiff_t					difference_type;
	typedef	T								value_type;
	typedef T*								pointer;
	typedef T&								reference;
	typedef	std::random_access_iterator_tag	iterator_category;
	

};

template<class T>
struct iterator_traits<T const*> {

	
	typedef std::ptrdiff_t					difference_type;
	typedef	T								value_type;
	typedef const T*						pointer;
	typedef const T&						reference;
	typedef	std::random_access_iterator_tag	iterator_category;
};



}
#endif


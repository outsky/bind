#ifndef BIND_H
#define BIND_H

#include "bind_t.h"
#include "arg_list.h"
#include "fn_wrapper.h"

// non-member function with 2 arguments
template <typename R, typename B1, typename B2, typename A1, typename A2>
bind_t<R, normal_fn<R, R (*)(B1,B2)>, arg_list2<A1,A2> >
bind(R (*f)(B1,B2), A1 a1, A2 a2) {
    typedef R (*FN)(B1, B2);
    typedef normal_fn<R, FN> F;
    arg_list2<A1,A2> l2(a1, a2);
    return bind_t<R,F,arg_list2<A1,A2> >(F(f), l2);
}

// member function with 2 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename A1, typename A2>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2)>, arg_list3<C,A1,A2> >
bind(R (T::*f)(B1,B2), C c, A1 a1, A2 a2) {
    typedef R (T::*FN)(B1, B2);
    typedef member_fn<T, R, FN> F;
    arg_list3<C,A1,A2> l3(c, a1, a2);
    return bind_t<R,F,arg_list3<C,A1,A2> >(F(f), l3);
}

// member function with 2 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename A1, typename A2>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2) const>, arg_list3<C,A1,A2> >
bind(R (T::*f)(B1,B2) const, C c, A1 a1, A2 a2) {
    typedef R (T::*FN)(B1, B2) const;
    typedef member_fn<T, R, FN> F;
    arg_list3<C,A1,A2> l3(c, a1, a2);
    return bind_t<R,F,arg_list3<C,A1,A2> >(F(f), l3);
}

#endif

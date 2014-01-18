#ifndef BIND_H
#define BIND_H

#include "bind_t.h"
#include "arg_list.h"
#include "fn_wrapper.h"

//
// non-member functions
//
// 0 arguments
template <typename R>
bind_t<R, normal_fn<R, R (*)()>, arg_list0>
bind(R (*f)()) {
    typedef R (*FN)();
    typedef normal_fn<R, FN> F;
    arg_list0 l0;
    return bind_t<R,F,arg_list0>(F(f), l0);
}
// 1 arguments
template <typename R, typename B1, typename A1>
bind_t<R, normal_fn<R, R (*)(B1)>, arg_list1<A1> >
bind(R (*f)(B1), A1 a1) {
    typedef R (*FN)(B1);
    typedef normal_fn<R, FN> F;
    arg_list1<A1> l1(a1);
    return bind_t<R,F,arg_list1<A1> >(F(f), l1);
}
// 2 arguments
template <typename R, typename B1, typename B2, typename A1, typename A2>
bind_t<R, normal_fn<R, R (*)(B1,B2)>, arg_list2<A1,A2> >
bind(R (*f)(B1,B2), A1 a1, A2 a2) {
    typedef R (*FN)(B1, B2);
    typedef normal_fn<R, FN> F;
    arg_list2<A1,A2> l2(a1, a2);
    return bind_t<R,F,arg_list2<A1,A2> >(F(f), l2);
}
// 3 arguments
template <typename R, typename B1, typename B2, typename B3, typename A1, typename A2, typename A3>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3)>, arg_list3<A1,A2,A3> >
bind(R (*f)(B1,B2,B3), A1 a1, A2 a2, A3 a3) {
    typedef R (*FN)(B1, B2, B3);
    typedef normal_fn<R, FN> F;
    arg_list3<A1,A2,A3> l3(a1, a2, a3);
    return bind_t<R,F,arg_list3<A1,A2,A3> >(F(f), l3);
}
// 4 arguments
template <typename R, typename B1, typename B2, typename B3, typename B4, typename A1, typename A2, typename A3, typename A4>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3,B4)>, arg_list4<A1,A2,A3,A4> >
bind(R (*f)(B1,B2,B3,B4), A1 a1, A2 a2, A3 a3, A4 a4) {
    typedef R (*FN)(B1, B2, B3, B4);
    typedef normal_fn<R, FN> F;
    arg_list4<A1,A2,A3,A4> l4(a1, a2, a3, a4);
    return bind_t<R,F,arg_list4<A1,A2,A3,A4> >(F(f), l4);
}
// 5 arguments
template <typename R, typename B1, typename B2, typename B3, typename B4, typename B5,
         typename A1, typename A2, typename A3, typename A4, typename A5>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3,B4,B5)>, arg_list5<A1,A2,A3,A4,A5> >
bind(R (*f)(B1,B2,B3,B4,B5), A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
    typedef R (*FN)(B1, B2, B3, B4, B5);
    typedef normal_fn<R, FN> F;
    arg_list5<A1,A2,A3,A4,A5> l5(a1, a2, a3, a4, a5);
    return bind_t<R,F,arg_list5<A1,A2,A3,A4,A5> >(F(f), l5);
}
// 6 arguments
template <typename R, typename B1, typename B2, typename B3, typename B4, typename B5, typename B6,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3,B4,B5,B6)>, arg_list6<A1,A2,A3,A4,A5,A6> >
bind(R (*f)(B1,B2,B3,B4,B5,B6), A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) {
    typedef R (*FN)(B1, B2, B3, B4, B5, B6);
    typedef normal_fn<R, FN> F;
    arg_list6<A1,A2,A3,A4,A5,A6> l6(a1, a2, a3, a4, a5, a6);
    return bind_t<R,F,arg_list6<A1,A2,A3,A4,A5,A6> >(F(f), l6);
}
// 7 arguments
template <typename R, typename B1, typename B2, typename B3, typename B4, typename B5, typename B6, typename B7,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3,B4,B5,B6,B7)>, arg_list7<A1,A2,A3,A4,A5,A6,A7> >
bind(R (*f)(B1,B2,B3,B4,B5,B6,B7), A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) {
    typedef R (*FN)(B1, B2, B3, B4, B5, B6, B7);
    typedef normal_fn<R, FN> F;
    arg_list7<A1,A2,A3,A4,A5,A6,A7> l7(a1, a2, a3, a4, a5, a6, a7);
    return bind_t<R,F,arg_list7<A1,A2,A3,A4,A5,A6,A7> >(F(f), l7);
}
// 8 arguments
template <typename R, typename B1, typename B2, typename B3, typename B4, typename B5, typename B6, typename B7, typename B8,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3,B4,B5,B6,B7,B8)>, arg_list8<A1,A2,A3,A4,A5,A6,A7,A8> >
bind(R (*f)(B1,B2,B3,B4,B5,B6,B7,B8), A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) {
    typedef R (*FN)(B1, B2, B3, B4, B5, B6, B7, B8);
    typedef normal_fn<R, FN> F;
    arg_list8<A1,A2,A3,A4,A5,A6,A7,A8> l8(a1, a2, a3, a4, a5, a6, a7, a8);
    return bind_t<R,F,arg_list8<A1,A2,A3,A4,A5,A6,A7,A8> >(F(f), l8);
}
// 9 arguments
template <typename R, typename B1, typename B2, typename B3, typename B4, typename B5, typename B6, typename B7, typename B8, typename B9,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
bind_t<R, normal_fn<R, R (*)(B1,B2,B3,B4,B5,B6,B7,B8,B9)>, arg_list9<A1,A2,A3,A4,A5,A6,A7,A8,A9> >
bind(R (*f)(B1,B2,B3,B4,B5,B6,B7,B8,B9), A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) {
    typedef R (*FN)(B1, B2, B3, B4, B5, B6, B7, B8, B9);
    typedef normal_fn<R, FN> F;
    arg_list9<A1,A2,A3,A4,A5,A6,A7,A8,A9> l9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    return bind_t<R,F,arg_list9<A1,A2,A3,A4,A5,A6,A7,A8,A9> >(F(f), l9);
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

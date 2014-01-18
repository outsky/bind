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

//
// member functions
//
// 0 arguments
template <typename R, typename T, typename C>
bind_t<R, member_fn<T,R,R (T::*)()>, arg_list1<C> >
bind(R (T::*f)(), C c) {
    typedef R (T::*FN)();
    typedef member_fn<T, R, FN> F;
    arg_list1<C> l1(c);
    return bind_t<R,F,arg_list1<C> >(F(f), l1);
}
// 0 arguments, constant
template <typename R, typename T, typename C>
bind_t<R, member_fn<T,R,R (T::*)() const>, arg_list1<C> >
bind(R (T::*f)() const, C c) {
    typedef R (T::*FN)() const;
    typedef member_fn<T, R, FN> F;
    arg_list1<C> l1(c);
    return bind_t<R,F,arg_list1<C> >(F(f), l1);
}

// 1 arguments
template <typename R, typename T, typename C, typename B1, typename A1>
bind_t<R, member_fn<T,R,R (T::*)(B1)>, arg_list2<C,A1> >
bind(R (T::*f)(B1), C c, A1 a1) {
    typedef R (T::*FN)(B1);
    typedef member_fn<T, R, FN> F;
    arg_list2<C,A1> l2(c, a1);
    return bind_t<R,F,arg_list2<C,A1> >(F(f), l2);
}
// 1 arguments, constant
template <typename R, typename T, typename C, typename B1, typename A1>
bind_t<R, member_fn<T,R,R (T::*)(B1) const>, arg_list2<C,A1> >
bind(R (T::*f)(B1) const, C c, A1 a1) {
    typedef R (T::*FN)(B1) const;
    typedef member_fn<T, R, FN> F;
    arg_list2<C,A1> l2(c, a1);
    return bind_t<R,F,arg_list2<C,A1> >(F(f), l2);
}

// 2 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename A1, typename A2>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2)>, arg_list3<C,A1,A2> >
bind(R (T::*f)(B1,B2), C c, A1 a1, A2 a2) {
    typedef R (T::*FN)(B1, B2);
    typedef member_fn<T, R, FN> F;
    arg_list3<C,A1,A2> l3(c, a1, a2);
    return bind_t<R,F,arg_list3<C,A1,A2> >(F(f), l3);
}
// 2 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename A1, typename A2>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2) const>, arg_list3<C,A1,A2> >
bind(R (T::*f)(B1,B2) const, C c, A1 a1, A2 a2) {
    typedef R (T::*FN)(B1, B2) const;
    typedef member_fn<T, R, FN> F;
    arg_list3<C,A1,A2> l3(c, a1, a2);
    return bind_t<R,F,arg_list3<C,A1,A2> >(F(f), l3);
}

// 3 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename A1, typename A2, typename A3>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3)>, arg_list4<C,A1,A2,A3> >
bind(R (T::*f)(B1,B2,B3), C c, A1 a1, A2 a2, A3 a3) {
    typedef R (T::*FN)(B1, B2, B3);
    typedef member_fn<T, R, FN> F;
    arg_list4<C,A1,A2,A3> l4(c, a1, a2, a3);
    return bind_t<R,F,arg_list4<C,A1,A2,A3> >(F(f), l4);
}
// 3 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename A1, typename A2, typename A3>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3) const>, arg_list4<C,A1,A2,A3> >
bind(R (T::*f)(B1,B2,B3) const, C c, A1 a1, A2 a2, A3 a3) {
    typedef R (T::*FN)(B1, B2, B3) const;
    typedef member_fn<T, R, FN> F;
    arg_list4<C,A1,A2,A3> l4(c, a1, a2, a3);
    return bind_t<R,F,arg_list4<C,A1,A2,A3> >(F(f), l4);
}

// 4 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4,
         typename A1, typename A2, typename A3, typename A4>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4)>, arg_list5<C,A1,A2,A3,A4> >
bind(R (T::*f)(B1,B2,B3,B4), C c, A1 a1, A2 a2, A3 a3, A4 a4) {
    typedef R (T::*FN)(B1, B2, B3, B4);
    typedef member_fn<T, R, FN> F;
    arg_list5<C,A1,A2,A3,A4> l5(c, a1, a2, a3, a4);
    return bind_t<R,F,arg_list5<C,A1,A2,A3,A4> >(F(f), l5);
}
// 4 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4,
         typename A1, typename A2, typename A3, typename A4>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4) const>, arg_list5<C,A1,A2,A3,A4> >
bind(R (T::*f)(B1,B2,B3,B4) const, C c, A1 a1, A2 a2, A3 a3, A4 a4) {
    typedef R (T::*FN)(B1, B2, B3, B4) const;
    typedef member_fn<T, R, FN> F;
    arg_list5<C,A1,A2,A3,A4> l5(c, a1, a2, a3, a4);
    return bind_t<R,F,arg_list5<C,A1,A2,A3,A4> >(F(f), l5);
}

// 5 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4, typename B5,
         typename A1, typename A2, typename A3, typename A4, typename A5>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5)>, arg_list6<C,A1,A2,A3,A4,A5> >
bind(R (T::*f)(B1,B2,B3,B4,B5), C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5);
    typedef member_fn<T, R, FN> F;
    arg_list6<C,A1,A2,A3,A4,A5> l6(c, a1, a2, a3, a4, a5);
    return bind_t<R,F,arg_list6<C,A1,A2,A3,A4,A5> >(F(f), l6);
}
// 5 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4, typename B5,
         typename A1, typename A2, typename A3, typename A4, typename A5>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5) const>, arg_list6<C,A1,A2,A3,A4,A5> >
bind(R (T::*f)(B1,B2,B3,B4,B5) const, C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5) const;
    typedef member_fn<T, R, FN> F;
    arg_list6<C,A1,A2,A3,A4,A5> l6(c, a1, a2, a3, a4, a5);
    return bind_t<R,F,arg_list6<C,A1,A2,A3,A4,A5> >(F(f), l6);
}

// 6 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4, typename B5, typename B6,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5,B6)>, arg_list7<C,A1,A2,A3,A4,A5,A6> >
bind(R (T::*f)(B1,B2,B3,B4,B5,B6), C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5, B6);
    typedef member_fn<T, R, FN> F;
    arg_list7<C,A1,A2,A3,A4,A5,A6> l7(c, a1, a2, a3, a4, a5, a6);
    return bind_t<R,F,arg_list7<C,A1,A2,A3,A4,A5,A6> >(F(f), l7);
}
// 6 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4, typename B5, typename B6,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5,B6) const>, arg_list7<C,A1,A2,A3,A4,A5,A6> >
bind(R (T::*f)(B1,B2,B3,B4,B5,B6) const, C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5, B6) const;
    typedef member_fn<T, R, FN> F;
    arg_list7<C,A1,A2,A3,A4,A5,A6> l7(c, a1, a2, a3, a4, a5, a6);
    return bind_t<R,F,arg_list7<C,A1,A2,A3,A4,A5,A6> >(F(f), l7);
}

// 7 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4,
         typename B5, typename B6, typename B7,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5,B6,B7)>, arg_list8<C,A1,A2,A3,A4,A5,A6,A7> >
bind(R (T::*f)(B1,B2,B3,B4,B5,B6,B7), C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5, B6, B7);
    typedef member_fn<T, R, FN> F;
    arg_list8<C,A1,A2,A3,A4,A5,A6,A7> l8(c, a1, a2, a3, a4, a5, a6, a7);
    return bind_t<R,F,arg_list8<C,A1,A2,A3,A4,A5,A6,A7> >(F(f), l8);
}
// 7 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4,
         typename B5, typename B6, typename B7,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5,B6,B7) const>, arg_list8<C,A1,A2,A3,A4,A5,A6,A7> >
bind(R (T::*f)(B1,B2,B3,B4,B5,B6,B7) const, C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5, B6, B7) const;
    typedef member_fn<T, R, FN> F;
    arg_list8<C,A1,A2,A3,A4,A5,A6,A7> l8(c, a1, a2, a3, a4, a5, a6, a7);
    return bind_t<R,F,arg_list8<C,A1,A2,A3,A4,A5,A6,A7> >(F(f), l8);
}

// 8 arguments
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4,
         typename B5, typename B6, typename B7, typename B8,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5,B6,B7,B8)>, arg_list9<C,A1,A2,A3,A4,A5,A6,A7,A8> >
bind(R (T::*f)(B1,B2,B3,B4,B5,B6,B7,B8), C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5, B6, B7, B8);
    typedef member_fn<T, R, FN> F;
    arg_list9<C,A1,A2,A3,A4,A5,A6,A7,A8> l9(c, a1, a2, a3, a4, a5, a6, a7, a8);
    return bind_t<R,F,arg_list9<C,A1,A2,A3,A4,A5,A6,A7,A8> >(F(f), l9);
}
// 8 arguments, constant
template <typename R, typename T, typename C, typename B1, typename B2, typename B3, typename B4,
         typename B5, typename B6, typename B7, typename B8,
         typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
bind_t<R, member_fn<T,R,R (T::*)(B1,B2,B3,B4,B5,B6,B7,B8) const>, arg_list9<C,A1,A2,A3,A4,A5,A6,A7,A8> >
bind(R (T::*f)(B1,B2,B3,B4,B5,B6,B7,B8) const, C c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) {
    typedef R (T::*FN)(B1, B2, B3, B4, B5, B6, B7, B8) const;
    typedef member_fn<T, R, FN> F;
    arg_list9<C,A1,A2,A3,A4,A5,A6,A7,A8> l9(c, a1, a2, a3, a4, a5, a6, a7, a8);
    return bind_t<R,F,arg_list9<C,A1,A2,A3,A4,A5,A6,A7,A8> >(F(f), l9);
}

#endif

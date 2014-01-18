#ifndef BIND_H
#define BIND_H

#include "bind_t.h"
#include "arg_list.h"

// non-member function with 2 arguments
template <typename R, typename B1, typename B2, typename A1, typename A2>
bind_t<R,R (*)(B1,B2),arg_list2<A1,A2> > bind(R (*f)(B1,B2), A1 a1, A2 a2) {
    arg_list2<A1,A2> al2(a1, a2);
    return bind_t<R,R (*)(B1,B2),arg_list2<A1,A2> >(f, al2);
}

// member function with 2 arguments, pass class object by reference
template <typename R, typename C, typename B1, typename B2, typename A1, typename A2>
bind_mf_ref_t<R,C,R (C::*)(B1,B2),arg_list2<A1,A2> > bind(R (C::*f)(B1,B2), C& c, A1 a1, A2 a2) {
    arg_list2<A1,A2> al2(a1, a2);
    return bind_mf_ref_t<R,C,R (C::*)(B1,B2),arg_list2<A1,A2> >(f, c, al2);
}

/*
// member function with 2 arguments, pass class object by reference, constant
template <typename R, typename C, typename B1, typename B2, typename A1, typename A2>
bind_mf_ref_t<R,C,R (C::*)(B1,B2) const,arg_list2<A1,A2> > bind(R (C::*f)(B1,B2) const, const C& c, A1 a1, A2 a2) {
    arg_list2<A1,A2> al2(a1, a2);
    return bind_mf_ref_t<R,C,R (C::*)(B1,B2) const,arg_list2<A1,A2> >(f, c, al2);
}
*/

// member function with 2 arguments, pass class object by pointer
template <typename R, typename C, typename B1, typename B2, typename A1, typename A2>
bind_mf_pt_t<R,C,R (C::*)(B1,B2),arg_list2<A1,A2> > bind(R (C::*f)(B1,B2), C* c, A1 a1, A2 a2) {
    arg_list2<A1,A2> al2(a1, a2);
    return bind_mf_pt_t<R,C,R (C::*)(B1,B2),arg_list2<A1,A2> >(f, c, al2);
}

/*
// member function with 2 arguments, pass class object by pointer, constant
template <typename R, typename C, typename B1, typename B2, typename A1, typename A2>
bind_mf_pt_t<R,C,R (C::*)(B1,B2) const,arg_list2<A1,A2> > bind(R (C::*f)(B1,B2) const, const C* c, A1 a1, A2 a2) {
    arg_list2<A1,A2> al2(a1, a2);
    return bind_mf_pt_t<R,C,R (C::*)(B1,B2) const,arg_list2<A1,A2> >(f, c, al2);
}
*/

#endif

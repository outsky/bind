#ifndef BIND_H
#define BIND_H

#include "bind_t.h"
#include "arg_list.h"

template <typename R, typename B1, typename B2, typename A1, typename A2>
bind_t<R,R (*)(B1,B2),arg_list2<A1,A2> > bind(R (*f)(B1,B2), A1 a1, A2 a2) {
    arg_list2<A1,A2> al2(a1, a2);
    return bind_t<R,R (*)(B1,B2),arg_list2<A1,A2> >(f, al2);
}

#endif

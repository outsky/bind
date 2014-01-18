#ifndef BIND_T_H
#define BIND_T_H

#include "arg_list.h"
#include "fn_wrapper.h"

template <typename R, typename F, typename L>
class bind_t {
    public:
        bind_t(F _f, L _l) : f(_f), l(_l) {}

        R operator()() {
            arg_list0 l0;
            return l(type<R>(), f, l0);
        }

        template <typename A1>
        R operator()(const A1& a1) {
            arg_list1<A1> l1(a1);
            return l(type<R>(), f, l1);
        }

        template <typename A1, typename A2>
        R operator()(A1 a1, A2 a2) {
            arg_list2<A1, A2> l2(a1, a2);
            return l(type<R>(), f, l2);
        }

        template <typename A1, typename A2, typename A3>
        R operator()(A1 a1, A2 a2, A3 a3) {
            arg_list3<A1, A2, A3> l3(a1, a2, a3);
            return l(type<R>(), f, l3);
        }

    private:
        F f;
        L l;
};

#endif

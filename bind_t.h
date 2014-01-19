#ifndef BIND_T_H
#define BIND_T_H

#include "arg_list.h"
#include "fn_wrapper.h"

template <typename R, typename F, typename L>
class bind_t {
    public:
        bind_t(F _f, L _l) : f(_f), l(_l) {}

        // 0
        R operator()() {
            arg_list0 l0;
            return l(type<R>(), f, l0);
        }

        // 1
        template <typename A1>
        R operator()(const A1& a1) {
            arg_list1<A1> l1(a1);
            return l(type<R>(), f, l1);
        }

        // 2
        template <typename A1, typename A2>
        R operator()(A1 a1, A2 a2) {
            arg_list2<A1,A2> l2(a1, a2);
            return l(type<R>(), f, l2);
        }

        // 3
        template <typename A1, typename A2, typename A3>
        R operator()(A1 a1, A2 a2, A3 a3) {
            arg_list3<A1, A2, A3> l3(a1, a2, a3);
            return l(type<R>(), f, l3);
        }

        // 4
        template <typename A1, typename A2, typename A3, typename A4>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4) {
            arg_list4<A1, A2, A3, A4> l4(a1, a2, a3, a4);
            return l(type<R>(), f, l4);
        }

        // 5
        template <typename A1, typename A2, typename A3, typename A4, typename A5>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
            arg_list5<A1, A2, A3, A4, A5> l5(a1, a2, a3, a4, a5);
            return l(type<R>(), f, l5);
        }

        // 6
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) {
            arg_list6<A1, A2, A3, A4, A5, A6> l6(a1, a2, a3, a4, a5, a6);
            return l(type<R>(), f, l6);
        }

        // 7
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) {
            arg_list7<A1, A2, A3, A4, A5, A6, A7> l7(a1, a2, a3, a4, a5, a6, a7);
            return l(type<R>(), f, l7);
        }

        // 8
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) {
            arg_list8<A1, A2, A3, A4, A5, A6, A7, A8> l8(a1, a2, a3, a4, a5, a6, a7, a8);
            return l(type<R>(), f, l8);
        }

        // 9
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) {
            arg_list9<A1, A2, A3, A4, A5, A6, A7, A8, A9> l9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
            return l(type<R>(), f, l9);
        }

    private:
        F f;
        L l;
};

#endif

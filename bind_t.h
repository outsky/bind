#ifndef BIND_T_H
#define BIND_T_H

#include "arg_list.h"

template <typename R, typename F, typename L>
class bind_t {
    public:
        bind_t(F f, L l) : fn(f), al(l) {}

        // 0 argument
        R operator()() {
            return fn(al.a1, al.a2);
        }

        // 1 arguments
        template <typename A1>
        R operator()(const A1& a1) {
            arg_list1<A1> al1(a1);
            return fn(al1[al.a1], al1[al.a2]);
        }

        // 2 arguments
        template <typename A1, typename A2>
        R operator()(A1 a1, A2 a2) {
            return fn(a1, a2);
        }

    private:
        F fn;   // binded function
        L al;   // arguments list
};

#endif

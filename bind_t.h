#ifndef BIND_T_H
#define BIND_T_H

#include "arg_list.h"

// for non-member functions
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

// for member functions(ref)
template <typename R, typename C, typename F, typename L>
class bind_mf_ref_t {
    public:
        bind_mf_ref_t(F f, C& c, L l) : fn(f), al(l), obj(c) {}

        // 0 argument
        R operator()() {
            return obj.fn(al.a1, al.a2);
        }

        // 1 arguments
        template <typename A1>
        R operator()(const A1& a1) {
            arg_list1<A1> al1(a1);
            return obj.fn(al1[al.a1], al1[al.a2]);
        }

        // 2 arguments
        template <typename A1, typename A2>
        R operator()(A1 a1, A2 a2) {
            return obj.fn(a1, a2);
        }

    private:
        F fn;   // binded function
        L al;   // arguments list
        C& obj; // class object
};

// for member functions(pointer)
template <typename R, typename C, typename F, typename L>
class bind_mf_pt_t {
    public:
        bind_mf_pt_t(F f, C* c, L l) : fn(f), al(l), obj(c) {}

        // 0 argument
        R operator()() {
            return (obj->*fn)(al.a1, al.a2);
        }

        // 1 arguments
        template <typename A1>
        R operator()(const A1& a1) {
            arg_list1<A1> al1(a1);
            return (obj->*fn)(al1[al.a1], al1[al.a2]);
        }

        // 2 arguments
        template <typename A1, typename A2>
        R operator()(A1 a1, A2 a2) {
            return (obj->*fn)(a1, a2);
        }

    private:
        F fn;   // binded function
        L al;   // arguments list
        C* obj; // class object
};

#endif

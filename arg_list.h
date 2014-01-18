#ifndef ARG_LIST_H
#define ARG_LIST_H

#include "placeholder.h"

template <typename T>
class type {};

template <typename A1>
class arg_list1 {
    public:
        arg_list1(A1 p1) : a1(p1) {}

        template <typename V>
        A1 operator[](const V& v) { return v; }

        A1 operator[](const placeholder<1>&) { return a1; }

        template <typename R, typename F>
        R operator()(type<R>, F f) { return f(a1); }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[a1]); }

    public:
        A1 a1;
};

template <typename A1, typename A2>
class arg_list2 : public arg_list1<A1> {
    public:
        arg_list2(A1 p1, A2 p2) : arg_list1<A1>(p1), a2(p2) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return a2; }

        template <typename R, typename F>
        R operator()(type<R>, F f) { return f(this->a1, a2); }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[a2]); }

    public:
        A2 a2;
};

template <typename A1, typename A2, typename A3>
class arg_list3 : public arg_list2<A1, A2> {
    public:
        arg_list3(A1 _a1, A2 _a2, A3 _a3) : arg_list2<A1,A2>(_a1, _a2), a3(_a3) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return a3; }

        template <typename R, typename F>
        R operator()(type<R>, F f) { return f(this->a1, this->a2, a3); }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[a3]); }

    public:
        A3 a3;
};

#endif

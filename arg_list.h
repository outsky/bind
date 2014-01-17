#ifndef ARG_LIST_H
#define ARG_LIST_H

#include "placeholder.h"

template <typename A1>
class arg_list1 {
    public:
        arg_list1(A1 p1) : a1(p1) {}

        template <typename V>
        A1 operator[](const V& v) { return v; }

        A1 operator[](const placeholder<1>&) { return a1; }

    public:
        A1 a1;
};

template <typename A1, typename A2>
class arg_list2 : public arg_list1<A1> {
    public:
        arg_list2(A1 p1, A2 p2) : arg_list1<A1>(p1), a2(p2) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return a2; }

    public:
        A2 a2;
};

#endif

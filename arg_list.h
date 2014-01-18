#ifndef ARG_LIST_H
#define ARG_LIST_H

#include "placeholder.h"

template <typename T>
class type {};

class arg_list0 {
    public:
        template <typename V>
        V operator[](const V& v) { return v; }
};

template <typename A1>
class arg_list1 : public arg_list0 {
    public:
        arg_list1(A1 p1) : a1(p1) {}

        template <typename V>
        V operator[](const V& v) { return v; }

        A1 operator[](const placeholder<1>&) { return a1; }

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
        A3 operator[](const placeholder<3>&) { return this->a3; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3]); }

    public:
        A3 a3;
};

template <typename A1, typename A2, typename A3, typename A4>
class arg_list4 : public arg_list3<A1, A2, A3> {
    public:
        arg_list4(A1 _a1, A2 _a2, A3 _a3, A4 _a4) : arg_list3<A1,A2,A3>(_a1, _a2, _a3), a4(_a4) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return this->a3; }
        A4 operator[](const placeholder<4>&) { return this->a4; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3], l[this->a4]); }

    public:
        A4 a4;
};

template <typename A1, typename A2, typename A3, typename A4, typename A5>
class arg_list5 : public arg_list4<A1, A2, A3, A4> {
    public:
        arg_list5(A1 _a1, A2 _a2, A3 _a3, A4 _a4, A5 _a5) : arg_list4<A1,A2,A3,A4>(_a1, _a2, _a3, _a4), a5(_a5) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return this->a3; }
        A4 operator[](const placeholder<4>&) { return this->a4; }
        A5 operator[](const placeholder<5>&) { return this->a5; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3], l[this->a4], l[this->a5]); }

    public:
        A5 a5;
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
class arg_list6 : public arg_list5<A1, A2, A3, A4, A5> {
    public:
        arg_list6(A1 _a1, A2 _a2, A3 _a3, A4 _a4, A5 _a5, A6 _a6) : arg_list5<A1,A2,A3,A4,A5>(_a1, _a2, _a3, _a4, _a5), a6(_a6) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return this->a3; }
        A4 operator[](const placeholder<4>&) { return this->a4; }
        A5 operator[](const placeholder<5>&) { return this->a5; }
        A6 operator[](const placeholder<6>&) { return this->a6; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3], l[this->a4], l[this->a5], l[this->a6]); }

    public:
        A6 a6;
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
class arg_list7 : public arg_list6<A1, A2, A3, A4, A5, A6> {
    public:
        arg_list7(A1 _a1, A2 _a2, A3 _a3, A4 _a4, A5 _a5, A6 _a6, A7 _a7) :
            arg_list6<A1,A2,A3,A4,A5,A6>(_a1, _a2, _a3, _a4, _a5, _a6), a7(_a7) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return this->a3; }
        A4 operator[](const placeholder<4>&) { return this->a4; }
        A5 operator[](const placeholder<5>&) { return this->a5; }
        A6 operator[](const placeholder<6>&) { return this->a6; }
        A7 operator[](const placeholder<7>&) { return this->a7; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3], l[this->a4], l[this->a5],
                l[this->a6], l[this->a7]); }

    public:
        A7 a7;
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
class arg_list8 : public arg_list7<A1, A2, A3, A4, A5, A6, A7> {
    public:
        arg_list8(A1 _a1, A2 _a2, A3 _a3, A4 _a4, A5 _a5, A6 _a6, A7 _a7, A8 _a8) :
            arg_list7<A1,A2,A3,A4,A5,A6,A7>(_a1, _a2, _a3, _a4, _a5, _a6, _a7), a8(_a8) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return this->a3; }
        A4 operator[](const placeholder<4>&) { return this->a4; }
        A5 operator[](const placeholder<5>&) { return this->a5; }
        A6 operator[](const placeholder<6>&) { return this->a6; }
        A7 operator[](const placeholder<7>&) { return this->a7; }
        A8 operator[](const placeholder<8>&) { return this->a8; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3], l[this->a4], l[this->a5],
                l[this->a6], l[this->a7], l[this->a8]); }

    public:
        A8 a8;
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
class arg_list9 : public arg_list8<A1, A2, A3, A4, A5, A6, A7, A8> {
    public:
        arg_list9(A1 _a1, A2 _a2, A3 _a3, A4 _a4, A5 _a5, A6 _a6, A7 _a7, A8 _a8, A9 _a9) :
            arg_list8<A1,A2,A3,A4,A5,A6,A7,A8>(_a1, _a2, _a3, _a4, _a5, _a6, _a7, _a8), a9(_a9) {}

        A1 operator[](const placeholder<1>&) { return this->a1; }
        A2 operator[](const placeholder<2>&) { return this->a2; }
        A3 operator[](const placeholder<3>&) { return this->a3; }
        A4 operator[](const placeholder<4>&) { return this->a4; }
        A5 operator[](const placeholder<5>&) { return this->a5; }
        A6 operator[](const placeholder<6>&) { return this->a6; }
        A7 operator[](const placeholder<7>&) { return this->a7; }
        A8 operator[](const placeholder<8>&) { return this->a8; }
        A9 operator[](const placeholder<9>&) { return this->a9; }

        template <typename R, typename F, typename L>
        R operator()(type<R>, F f, L l) { return f(l[this->a1], l[this->a2], l[this->a3], l[this->a4], l[this->a5],
                l[this->a6], l[this->a7], l[this->a8], l[this->a9]); }

    public:
        A9 a9;
};

#endif

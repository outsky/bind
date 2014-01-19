#ifndef PLACEHOLDER_H
#define PLACEHOLDER_H

template <int>
class placeholder {
};

placeholder<1> _1;
placeholder<2> _2;
placeholder<3> _3;
placeholder<4> _4;
placeholder<5> _5;
placeholder<6> _6;
placeholder<7> _7;
placeholder<8> _8;
placeholder<9> _9;

template <typename T>
class non_placeholder {
    public:
        non_placeholder(T& v) : t(v) {}
        T& get() { return t; }

    private:
        T t;
};

template <typename T>
struct is_placeholder {
    enum { value = 0 };
};

template <int I>
struct is_placeholder<placeholder<I> > {
    enum { value = I };
};

template <typename T, int I>
struct vt_2 {
    typedef placeholder<I> type;
};

template <typename T>
struct vt_2<T, 0> {
    typedef non_placeholder<T> type;
};

template <typename T>
struct value_type {
    typedef typename vt_2<T, is_placeholder<T>::value>::type type;
};

#endif

#ifndef FN_WRAPPER_H
#define FN_WRAPPER_H

template <typename R, typename F>
class normal_fn {
    public:
        normal_fn(F _f) : f(_f) {}

        R operator()() { return f(); }

        template <typename A1>
        R operator()(A1 a1) { return f(a1); }

        template <typename A1, typename A2>
        R operator()(A1 a1, A2 a2) { return f(a1, a2); }

    private:
        F f;
};

template <typename C, typename R, typename F>
class member_fn {
    public:
        member_fn(F _f) : f(_f) {}

        R operator()(C* c) { return (c->*f)(); }

        template <typename A1>
        R operator()(C* c, A1 a1) { return (c->*f)(a1); }

        template <typename A1, typename A2>
        R operator()(C* c, A1 a1, A2 a2) { return (c->*f)(a1, a2); }

    private:
        F f;
};

#endif

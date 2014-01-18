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

        template <typename A1, typename A2, typename A3>
        R operator()(A1 a1, A2 a2, A3 a3) { return f(a1, a2, a3); }

        template <typename A1, typename A2, typename A3, typename A4>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4) { return f(a1, a2, a3, a4); }

        template <typename A1, typename A2, typename A3, typename A4, typename A5>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) { return f(a1, a2, a3, a4, a5); }

        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return f(a1, a2, a3, a4, a5, a6); }

        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) { return f(a1, a2, a3, a4, a5, a6, a7); }

        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) { return f(a1, a2, a3, a4, a5, a6, a7, a8); }

        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
        R operator()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) { return f(a1, a2, a3, a4, a5, a6, a7, a8, a9); }

    private:
        F f;
};

template <typename C, typename R, typename F>
class member_fn {
    public:
        member_fn(F _f) : f(_f) {}

        // 0
        R operator()(C* c) { return (c->*f)(); }
        R operator()(const C* c) { return (c->*f)(); }
        R operator()(C& c) { return (c.*f)(); }
        R operator()(const C& c) { return (c.*f)(); }

        // 1
        template <typename A1>
        R operator()(C* c, A1 a1) { return (c->*f)(a1); }
        template <typename A1>
        R operator()(const C* c, A1 a1) { return (c->*f)(a1); }
        template <typename A1>
        R operator()(C& c, A1 a1) { return (c.*f)(a1); }
        template <typename A1>
        R operator()(const C& c, A1 a1) { return (c.*f)(a1); }

        // 2
        template <typename A1, typename A2>
        R operator()(C* c, A1 a1, A2 a2) { return (c->*f)(a1, a2); }
        template <typename A1, typename A2>
        R operator()(const C* c, A1 a1, A2 a2) { return (c->*f)(a1, a2); }
        template <typename A1, typename A2>
        R operator()(C& c, A1 a1, A2 a2) { return (c.*f)(a1, a2); }
        template <typename A1, typename A2>
        R operator()(const C& c, A1 a1, A2 a2) { return (c.*f)(a1, a2); }

        // 3
        template <typename A1, typename A2, typename A3>
        R operator()(C* c, A1 a1, A2 a2, A3 a3) { return (c->*f)(a1, a2, a3); }
        template <typename A1, typename A2, typename A3>
        R operator()(const C* c, A1 a1, A2 a2, A3 a3) { return (c->*f)(a1, a2, a3); }
        template <typename A1, typename A2, typename A3>
        R operator()(C& c, A1 a1, A2 a2, A3 a3) { return (c.*f)(a1, a2, a3); }
        template <typename A1, typename A2, typename A3>
        R operator()(const C& c, A1 a1, A2 a2, A3 a3) { return (c.*f)(a1, a2, a3); }

        // 4
        template <typename A1, typename A2, typename A3, typename A4>
        R operator()(C* c, A1 a1, A2 a2, A3 a3, A4 a4) { return (c->*f)(a1, a2, a3, a4); }
        template <typename A1, typename A2, typename A3, typename A4>
        R operator()(const C* c, A1 a1, A2 a2, A3 a3, A4 a4) { return (c->*f)(a1, a2, a3, a4); }
        template <typename A1, typename A2, typename A3, typename A4>
        R operator()(C& c, A1 a1, A2 a2, A3 a3, A4 a4) { return (c.*f)(a1, a2, a3, a4); }
        template <typename A1, typename A2, typename A3, typename A4>
        R operator()(const C& c, A1 a1, A2 a2, A3 a3, A4 a4) { return (c.*f)(a1, a2, a3, a4); }

        // 5
        template <typename A1, typename A2, typename A3, typename A4, typename A5>
        R operator()(C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) { return (c->*f)(a1, a2, a3, a4, a5); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5>
        R operator()(const C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) { return (c->*f)(a1, a2, a3, a4, a5); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5>
        R operator()(C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) { return (c.*f)(a1, a2, a3, a4, a5); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5>
        R operator()(const C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) { return (c.*f)(a1, a2, a3, a4, a5); }

        // 6
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
        R operator()(C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return (c->*f)(a1, a2, a3, a4, a5, a6); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
        R operator()(const C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return (c->*f)(a1, a2, a3, a4, a5, a6); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
        R operator()(C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return (c.*f)(a1, a2, a3, a4, a5, a6); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
        R operator()(const C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return (c.*f)(a1, a2, a3, a4, a5, a6); }

        // 7
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
        R operator()(C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) { return (c->*f)(a1, a2, a3, a4, a5, a6, a7); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
        R operator()(const C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) { return (c->*f)(a1, a2, a3, a4, a5, a6, a7); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
        R operator()(C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) { return (c.*f)(a1, a2, a3, a4, a5, a6, a7); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
        R operator()(const C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) { return (c.*f)(a1, a2, a3, a4, a5, a6, a7); }

        // 8
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
        R operator()(C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) { return (c->*f)(a1, a2, a3, a4, a5, a6, a7, a8); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
        R operator()(const C* c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) { return (c->*f)(a1, a2, a3, a4, a5, a6, a7, a8); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
        R operator()(C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) { return (c.*f)(a1, a2, a3, a4, a5, a6, a7, a8); }
        template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
        R operator()(const C& c, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) { return (c.*f)(a1, a2, a3, a4, a5, a6, a7, a8); }

    private:
        F f;
};

#endif

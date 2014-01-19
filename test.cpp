#include <iostream>
#include "bind.h"

static int errors = 0;
inline void test_failed_impl(char const * expr, char const * file, int line, char const * function)
{
    std::cerr
      << file << "(" << line << "): test '" << expr << "' failed in function '"
      << function << "'" << std::endl;
    ++errors;
}
#define BOOST_TEST(expr) ((expr)? (void)0: test_failed_impl(#expr, __FILE__, __LINE__, __PRETTY_FUNCTION__))
inline int report_errors()
{
    if( errors == 0 )
    {
        std::cerr
          << "No errors detected." << std::endl;
        return 0;
    }
    else
    {
        std::cerr
          << errors << " error" << (errors == 1? "": "s") << " detected." << std::endl;
        return 1;
    }
}

long f_0()
{
    return 17041L;
}

long f_1(long a)
{
    return a;
}

long f_2(long a, long b)
{
    return a + 10 * b;
}

long f_3(long a, long b, long c)
{
    return a + 10 * b + 100 * c;
}

long f_4(long a, long b, long c, long d)
{
    return a + 10 * b + 100 * c + 1000 * d;
}

long f_5(long a, long b, long c, long d, long e)
{
    return a + 10 * b + 100 * c + 1000 * d + 10000 * e;
}

long f_6(long a, long b, long c, long d, long e, long f)
{
    return a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f;
}

long f_7(long a, long b, long c, long d, long e, long f, long g)
{
    return a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f + 1000000 * g;
}

long f_8(long a, long b, long c, long d, long e, long f, long g, long h)
{
    return a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f + 1000000 * g + 10000000 * h;
}

long f_9(long a, long b, long c, long d, long e, long f, long g, long h, long i)
{
    return a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f + 1000000 * g + 10000000 * h + 100000000 * i;
}

long global_result;

void fv_0()
{
    global_result = 17041L;
}

void fv_1(long a)
{
    global_result = a;
}

void fv_2(long a, long b)
{
    global_result = a + 10 * b;
}

void fv_3(long a, long b, long c)
{
    global_result = a + 10 * b + 100 * c;
}

void fv_4(long a, long b, long c, long d)
{
    global_result = a + 10 * b + 100 * c + 1000 * d;
}

void fv_5(long a, long b, long c, long d, long e)
{
    global_result = a + 10 * b + 100 * c + 1000 * d + 10000 * e;
}

void fv_6(long a, long b, long c, long d, long e, long f)
{
    global_result = a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f;
}

void fv_7(long a, long b, long c, long d, long e, long f, long g)
{
    global_result = a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f + 1000000 * g;
}

void fv_8(long a, long b, long c, long d, long e, long f, long g, long h)
{
    global_result = a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f + 1000000 * g + 10000000 * h;
}

void fv_9(long a, long b, long c, long d, long e, long f, long g, long h, long i)
{
    global_result = a + 10 * b + 100 * c + 1000 * d + 10000 * e + 100000 * f + 1000000 * g + 10000000 * h + 100000000 * i;
}

void function_test()
{
    int const i = 1;

    //BOOST_TEST( bind(f_0)(i) == 17041L );
    BOOST_TEST( bind(f_1, _1)(i) == 1L );
    BOOST_TEST( bind(f_2, _1, 2)(i) == 21L );
    BOOST_TEST( bind(f_3, _1, 2, 3)(i) == 321L );
    BOOST_TEST( bind(f_4, _1, 2, 3, 4)(i) == 4321L );
    BOOST_TEST( bind(f_5, _1, 2, 3, 4, 5)(i) == 54321L );
    BOOST_TEST( bind(f_6, _1, 2, 3, 4, 5, 6)(i) == 654321L );
    BOOST_TEST( bind(f_7, _1, 2, 3, 4, 5, 6, 7)(i) == 7654321L );
    BOOST_TEST( bind(f_8, _1, 2, 3, 4, 5, 6, 7, 8)(i) == 87654321L );
    BOOST_TEST( bind(f_9, _1, 2, 3, 4, 5, 6, 7, 8, 9)(i) == 987654321L );

    //BOOST_TEST( (bind(fv_0)(i), (global_result == 17041L)) );
    BOOST_TEST( (bind(fv_1, _1)(i), (global_result == 1L)) );
    BOOST_TEST( (bind(fv_2, _1, 2)(i), (global_result == 21L)) );
    BOOST_TEST( (bind(fv_3, _1, 2, 3)(i), (global_result == 321L)) );
    BOOST_TEST( (bind(fv_4, _1, 2, 3, 4)(i), (global_result == 4321L)) );
    BOOST_TEST( (bind(fv_5, _1, 2, 3, 4, 5)(i), (global_result == 54321L)) );
    BOOST_TEST( (bind(fv_6, _1, 2, 3, 4, 5, 6)(i), (global_result == 654321L)) );
    BOOST_TEST( (bind(fv_7, _1, 2, 3, 4, 5, 6, 7)(i), (global_result == 7654321L)) );
    BOOST_TEST( (bind(fv_8, _1, 2, 3, 4, 5, 6, 7, 8)(i), (global_result == 87654321L)) );
    BOOST_TEST( (bind(fv_9, _1, 2, 3, 4, 5, 6, 7, 8, 9)(i), (global_result == 987654321L)) );
}

struct X
{
    mutable unsigned int hash;

    X(): hash(0) {}

    int f0() { f1(17); return 0; }
    int g0() const { g1(17); return 0; }

    int f1(int a1) { hash = (hash * 17041 + a1) % 32768; return 0; }
    int g1(int a1) const { hash = (hash * 17041 + a1 * 2) % 32768; return 0; }

    int f2(int a1, int a2) { f1(a1); f1(a2); return 0; }
    int g2(int a1, int a2) const { g1(a1); g1(a2); return 0; }

    int f3(int a1, int a2, int a3) { f2(a1, a2); f1(a3); return 0; }
    int g3(int a1, int a2, int a3) const { g2(a1, a2); g1(a3); return 0; }

    int f4(int a1, int a2, int a3, int a4) { f3(a1, a2, a3); f1(a4); return 0; }
    int g4(int a1, int a2, int a3, int a4) const { g3(a1, a2, a3); g1(a4); return 0; }

    int f5(int a1, int a2, int a3, int a4, int a5) { f4(a1, a2, a3, a4); f1(a5); return 0; }
    int g5(int a1, int a2, int a3, int a4, int a5) const { g4(a1, a2, a3, a4); g1(a5); return 0; }

    int f6(int a1, int a2, int a3, int a4, int a5, int a6) { f5(a1, a2, a3, a4, a5); f1(a6); return 0; }
    int g6(int a1, int a2, int a3, int a4, int a5, int a6) const { g5(a1, a2, a3, a4, a5); g1(a6); return 0; }

    int f7(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { f6(a1, a2, a3, a4, a5, a6); f1(a7); return 0; }
    int g7(int a1, int a2, int a3, int a4, int a5, int a6, int a7) const { g6(a1, a2, a3, a4, a5, a6); g1(a7); return 0; }

    int f8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { f7(a1, a2, a3, a4, a5, a6, a7); f1(a8); return 0; }
    int g8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) const { g7(a1, a2, a3, a4, a5, a6, a7); g1(a8); return 0; }
};

struct V
{
    mutable unsigned int hash;

    V(): hash(0) {}

    void f0() { f1(17); }
    void g0() const { g1(17); }

    void f1(int a1) { hash = (hash * 17041 + a1) % 32768; }
    void g1(int a1) const { hash = (hash * 17041 + a1 * 2) % 32768; }

    void f2(int a1, int a2) { f1(a1); f1(a2); }
    void g2(int a1, int a2) const { g1(a1); g1(a2); }

    void f3(int a1, int a2, int a3) { f2(a1, a2); f1(a3); }
    void g3(int a1, int a2, int a3) const { g2(a1, a2); g1(a3); }

    void f4(int a1, int a2, int a3, int a4) { f3(a1, a2, a3); f1(a4); }
    void g4(int a1, int a2, int a3, int a4) const { g3(a1, a2, a3); g1(a4); }

    void f5(int a1, int a2, int a3, int a4, int a5) { f4(a1, a2, a3, a4); f1(a5); }
    void g5(int a1, int a2, int a3, int a4, int a5) const { g4(a1, a2, a3, a4); g1(a5); }

    void f6(int a1, int a2, int a3, int a4, int a5, int a6) { f5(a1, a2, a3, a4, a5); f1(a6); }
    void g6(int a1, int a2, int a3, int a4, int a5, int a6) const { g5(a1, a2, a3, a4, a5); g1(a6); }

    void f7(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { f6(a1, a2, a3, a4, a5, a6); f1(a7); }
    void g7(int a1, int a2, int a3, int a4, int a5, int a6, int a7) const { g6(a1, a2, a3, a4, a5, a6); g1(a7); }

    void f8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { f7(a1, a2, a3, a4, a5, a6, a7); f1(a8); }
    void g8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) const { g7(a1, a2, a3, a4, a5, a6, a7); g1(a8); }
};

void member_function_test()
{
    X x;

    // 0

    bind(&X::f0, &x)();
    bind(&X::f0, &x)();

    bind(&X::g0, &x)();
    bind(&X::g0, x)();
    bind(&X::g0, &x)();

    // 1

    bind(&X::f1, &x, 1)();
    bind(&X::f1, &x, 1)();

    bind(&X::g1, &x, 1)();
    bind(&X::g1, x, 1)();
    bind(&X::g1, &x, 1)();

    // 2

    bind(&X::f2, &x, 1, 2)();
    bind(&X::f2, &x, 1, 2)();

    bind(&X::g2, &x, 1, 2)();
    bind(&X::g2, x, 1, 2)();
    bind(&X::g2, &x, 1, 2)();

    // 3

    bind(&X::f3, &x, 1, 2, 3)();
    bind(&X::f3, &x, 1, 2, 3)();

    bind(&X::g3, &x, 1, 2, 3)();
    bind(&X::g3, x, 1, 2, 3)();
    bind(&X::g3, &x, 1, 2, 3)();

    // 4

    bind(&X::f4, &x, 1, 2, 3, 4)();
    bind(&X::f4, &x, 1, 2, 3, 4)();

    bind(&X::g4, &x, 1, 2, 3, 4)();
    bind(&X::g4, x, 1, 2, 3, 4)();
    bind(&X::g4, &x, 1, 2, 3, 4)();

    // 5

    bind(&X::f5, &x, 1, 2, 3, 4, 5)();
    bind(&X::f5, &x, 1, 2, 3, 4, 5)();

    bind(&X::g5, &x, 1, 2, 3, 4, 5)();
    bind(&X::g5, x, 1, 2, 3, 4, 5)();
    bind(&X::g5, &x, 1, 2, 3, 4, 5)();

    // 6

    bind(&X::f6, &x, 1, 2, 3, 4, 5, 6)();
    bind(&X::f6, &x, 1, 2, 3, 4, 5, 6)();

    bind(&X::g6, &x, 1, 2, 3, 4, 5, 6)();
    bind(&X::g6, x, 1, 2, 3, 4, 5, 6)();
    bind(&X::g6, &x, 1, 2, 3, 4, 5, 6)();

    // 7

    bind(&X::f7, &x, 1, 2, 3, 4, 5, 6, 7)();
    bind(&X::f7, &x, 1, 2, 3, 4, 5, 6, 7)();

    bind(&X::g7, &x, 1, 2, 3, 4, 5, 6, 7)();
    bind(&X::g7, x, 1, 2, 3, 4, 5, 6, 7)();
    bind(&X::g7, &x, 1, 2, 3, 4, 5, 6, 7)();

    // 8

    bind(&X::f8, &x, 1, 2, 3, 4, 5, 6, 7, 8)();
    bind(&X::f8, &x, 1, 2, 3, 4, 5, 6, 7, 8)();

    bind(&X::g8, &x, 1, 2, 3, 4, 5, 6, 7, 8)();
    bind(&X::g8, x, 1, 2, 3, 4, 5, 6, 7, 8)();
    bind(&X::g8, &x, 1, 2, 3, 4, 5, 6, 7, 8)();

    BOOST_TEST( x.hash == 23558 );
}

void member_function_void_test()
{
    V v;

    // 0

    bind(&V::f0, &v)();
    bind(&V::f0, &v)();

    bind(&V::g0, &v)();
    bind(&V::g0, v)();
    bind(&V::g0, &v)();

    // 1

    bind(&V::f1, &v, 1)();
    bind(&V::f1, &v, 1)();

    bind(&V::g1, &v, 1)();
    bind(&V::g1, v, 1)();
    bind(&V::g1, &v, 1)();

    // 2

    bind(&V::f2, &v, 1, 2)();
    bind(&V::f2, &v, 1, 2)();

    bind(&V::g2, &v, 1, 2)();
    bind(&V::g2, v, 1, 2)();
    bind(&V::g2, &v, 1, 2)();

    // 3

    bind(&V::f3, &v, 1, 2, 3)();
    bind(&V::f3, &v, 1, 2, 3)();

    bind(&V::g3, &v, 1, 2, 3)();
    bind(&V::g3, v, 1, 2, 3)();
    bind(&V::g3, &v, 1, 2, 3)();

    // 4

    bind(&V::f4, &v, 1, 2, 3, 4)();
    bind(&V::f4, &v, 1, 2, 3, 4)();

    bind(&V::g4, &v, 1, 2, 3, 4)();
    bind(&V::g4, v, 1, 2, 3, 4)();
    bind(&V::g4, &v, 1, 2, 3, 4)();

    // 5

    bind(&V::f5, &v, 1, 2, 3, 4, 5)();
    bind(&V::f5, &v, 1, 2, 3, 4, 5)();

    bind(&V::g5, &v, 1, 2, 3, 4, 5)();
    bind(&V::g5, v, 1, 2, 3, 4, 5)();
    bind(&V::g5, &v, 1, 2, 3, 4, 5)();

    // 6

    bind(&V::f6, &v, 1, 2, 3, 4, 5, 6)();
    bind(&V::f6, &v, 1, 2, 3, 4, 5, 6)();

    bind(&V::g6, &v, 1, 2, 3, 4, 5, 6)();
    bind(&V::g6, v, 1, 2, 3, 4, 5, 6)();
    bind(&V::g6, &v, 1, 2, 3, 4, 5, 6)();

    // 7

    bind(&V::f7, &v, 1, 2, 3, 4, 5, 6, 7)();
    bind(&V::f7, &v, 1, 2, 3, 4, 5, 6, 7)();

    bind(&V::g7, &v, 1, 2, 3, 4, 5, 6, 7)();
    bind(&V::g7, v, 1, 2, 3, 4, 5, 6, 7)();
    bind(&V::g7, &v, 1, 2, 3, 4, 5, 6, 7)();

    // 8

    bind(&V::f8, &v, 1, 2, 3, 4, 5, 6, 7, 8)();
    bind(&V::f8, &v, 1, 2, 3, 4, 5, 6, 7, 8)();

    bind(&V::g8, &v, 1, 2, 3, 4, 5, 6, 7, 8)();
    bind(&V::g8, v, 1, 2, 3, 4, 5, 6, 7, 8)();
    bind(&V::g8, &v, 1, 2, 3, 4, 5, 6, 7, 8)();

    BOOST_TEST( v.hash == 23558 );
}

void nested_bind_test()
{
    /*
    int const x = 1;
    int const y = 2;

    BOOST_TEST( bind(f_1, bind(f_1, _1))(x) == 1L );
    BOOST_TEST( bind(f_1, bind(f_2, _1, _2))(x, y) == 21L );
    BOOST_TEST( bind(f_2, bind(f_1, _1), bind(f_1, _1))(x) == 11L );
    BOOST_TEST( bind(f_2, bind(f_1, _1), bind(f_1, _2))(x, y) == 21L );
    BOOST_TEST( bind(f_1, bind(f_0))() == 17041L );

    BOOST_TEST( (bind(fv_1, bind(f_1, _1))(x), (global_result == 1L)) );
    BOOST_TEST( (bind(fv_1, bind(f_2, _1, _2))(x, y), (global_result == 21L)) );
    BOOST_TEST( (bind(fv_2, bind(f_1, _1), bind(f_1, _1))(x), (global_result == 11L)) );
    BOOST_TEST( (bind(fv_2, bind(f_1, _1), bind(f_1, _2))(x, y), (global_result == 21L)) );
    BOOST_TEST( (bind(fv_1, bind(f_0))(), (global_result == 17041L)) );
    */
}

int main()
{
    function_test();

    member_function_test();
    member_function_void_test();
//    nested_bind_test();

    return report_errors();
}

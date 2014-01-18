#include <iostream>
#include "bind.h"

static int errors = 0;
inline void test_failed_impl(char const * expr, char const * file, int line, char const * function) {
    std::cerr
            << file << "(" << line << "): test '" << expr << "' failed in function '"
            << function << "'" << std::endl;
    ++errors;
}
#define TEST(expr) ((expr)? (void)0: test_failed_impl(#expr, __FILE__, __LINE__, __PRETTY_FUNCTION__))
inline int report_errors() {
    if( errors == 0 ) {
        std::cerr
                << "No errors detected." << std::endl;
        return 0;
    } else {
        std::cerr
                << errors << " error" << (errors == 1? "": "s") << " detected." << std::endl;
        return 1;
    }
}

long f_2(long a, long b) { return a + 10 * b;}

long global_result;
void fv_2(long a, long b) { global_result = a + 10 * b; }

void function_test()
{
    int const i = 1;
    bind(&f_2, _1, 2);
    TEST( bind(f_2, _1, 2)(i) == 21L );
    TEST( (bind(fv_2, _1, 2)(i), (global_result == 21L)) );
}

struct X
{
    mutable unsigned int hash;

    X(): hash(0) {}

    int f1(int a1) { hash = (hash * 17041 + a1) % 32768; return 0; }
    int g1(int a1) const { hash = (hash * 17041 + a1 * 2) % 32768; return 0; }

    int f2(int a1, int a2) { f1(a1); f1(a2); return 0; }
    int g2(int a1, int a2) const { g1(a1); g1(a2); return 0; }
};

struct V {
    mutable unsigned int hash;

    V(): hash(0) {}

    void f1(int a1) { hash = (hash * 17041 + a1) % 32768; }
    void g1(int a1) const { hash = (hash * 17041 + a1 * 2) % 32768; }

    void f2(int a1, int a2) { f1(a1); f1(a2); }
    void g2(int a1, int a2) const { g1(a1); g1(a2); }
};

void member_function_test() {
    X x;

    bind(&X::f2, &x, 1, 2)();

    /*
    bind(&X::g2, &x, 1, 2)();
    bind(&X::g2, x, 1, 2)();
    */

    TEST( x.hash == 23558 );
}

void member_function_void_test() {
    V v;

//    bind(&V::f2, &v, 1, 2)();

    /*
    bind(&V::g2, &v, 1, 2)();
    bind(&V::g2, v, 1, 2)();
    */

    TEST( v.hash == 23558 );
}

int main() {
    function_test();

    member_function_test();
    member_function_void_test();

    return report_errors();
}

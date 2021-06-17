#include "Foo.hpp"

#include <string.h>

double foo::add(double a, double b)
{
    return a + b;
}

const char* foo::reverse(const char* in)
{
    size_t len = strlen(in);
    char* out = new char[ len ];

    for ( int i=0; i<len; i++)
    {
        out[i] = in[len-i-1];
    }
    out[len] = '\0';

    return out;
}
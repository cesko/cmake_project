#include <iostream>

#include "Foo.hpp"

int main () 
{
    std::cout << "1 + 2 = " << foo::add(1,2) << '\n';

    std::cout << "reversing 'hello world' is '" << foo::reverse("hello world") << "'" << std::endl;
}
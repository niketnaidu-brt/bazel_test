#include "foo.h"

#include <iostream>

void vFoo(void) {
    std::cout << __FUNCTION__ << " hello\r\n";
}

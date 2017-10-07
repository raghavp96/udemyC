#include <stdio.h>

// and, or : short circut

int main() {
    int a = -1, b = 10, c;
    c = ++a && ++b; // Expect a = 0, b = 11, c = 0
                    // Actual: a = 0, b = 10, c = 0
    // c = (-1 + 1) && (++b)
    // c = 0 && (++b)
    // c = false && (++b) --> && both sides must be true, since first is false,
    // there's no point checking second, so it doesn't check second condition,
    // so ++b doesn't occur.

    // OR shortcircuits if the first conditon is true
}
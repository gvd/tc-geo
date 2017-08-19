#include "print_n.h"

#include <tc-shared/print.h>

namespace tc {
    void print_n(int n) {
        print(n);
        if (n > 0) print_n(n - 1);
    }
}
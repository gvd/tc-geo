#include "print_n.h"

#include <tc-shared/print.h>

namespace tc {
    void print_n(int n) {
        if (n == 0) return;
        print(n);
        print_n(n - 1);
    }
}

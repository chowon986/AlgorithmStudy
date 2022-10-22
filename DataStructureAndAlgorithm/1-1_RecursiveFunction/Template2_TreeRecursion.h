// Template2_TreeRecursion.h

#pragma once

int f(int n)
{
    if (1 == n) { return 1; }
    if (2 == n) { return 1; }

    return f(n - 1) + f(n - 2);
}
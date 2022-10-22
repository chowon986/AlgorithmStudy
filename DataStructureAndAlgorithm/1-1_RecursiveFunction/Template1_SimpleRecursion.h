#pragma once

#include <stdio.h>

void SimpleRecursion(int _nCount)
{
    printf("%d\n", _nCount);

    if (1 == _nCount)
    {
        return;
    }

    SimpleRecursion(_nCount - 1);
}
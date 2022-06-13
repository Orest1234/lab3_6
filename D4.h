#pragma once

#include "D1.h"
#include "D2.h"

class D4
        : private D1, public D2
{
private:
    int d4;

public:
    D4(int x, int y, int z, int i, int j)
            : D1(y, z), D2(i, j)
    {
        d4 = x;
    }

    void show_D4()
    {
        cout << "class D4:" << endl;
        show_D1();
        show_D2();
        cout << "show_D4()" << endl
             << "D4::d = " << d4 << endl << endl;
    }
};


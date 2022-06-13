#pragma once

#include "B.h"

class D2
        : private B
{
private:
    int d2;

public:
    D2(int x, int y)
            : B(y)
    {
        d2 = x;
    }

    void show_D2()
    {
        cout << "class D2:" << endl;
        show_B();
        cout << "show_D2()" << endl
             << "D2::d = " << d2 << endl << endl;
    }
};

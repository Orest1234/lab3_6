#pragma once

#include "B.h"

class D3
        : private B
{
private:
    int d3;

public:
    D3(int x, int y)
            : B(y)
    {
        d3 = x;
    }

    void show_D3()
    {
        cout << "class D3:" << endl;
        show_B();
        cout << "show_D3()" << endl
             << "D3::d = " << d3 << endl << endl;
    }
};

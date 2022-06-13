#pragma once

#include "D2.h"
#include "D3.h"

class D5
        : public D2, private D3
{
private:
    int d5;

public:
    D5(int x, int y, int z, int i, int j)
            : D2(y, z), D3(i, j)
    {
        d5 = x;
    }

    void show_D5()
    {
        cout << "class D5:" << endl;
        show_D2();
        show_D3();
        cout << "show_D5()" << endl
             << "D5::d = " << d5 << endl << endl;
    }
};


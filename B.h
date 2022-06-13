#pragma once

#include <iostream>

using namespace std;

class B
{
private:
    int b;

public:
    B()
            : b(0)
    {}

    B(int x)
    {
        b = x;
    }

    void show_B()
    {
        cout << "class B:" << endl;
        cout << "show_B()" << endl
             << "B::b = " << b << endl << endl;
    }
};

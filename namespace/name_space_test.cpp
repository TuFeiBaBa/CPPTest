#include <iostream>
#include "space_x.h"
#include "space_y.h"
using namespace std;

int main()
{
    //����
    cout << "a in space x : " << x::a<< endl;
    cout << "a in space y : " << y::a << endl;

    //����
    x::greet();
    y::greet();
    return 0;
}
#include <iostream>
#include "space_x.h"
#include "space_y.h"
using namespace std;

int main()
{
    //变量
    cout << "a in space x : " << x::a<< endl;
    cout << "a in space y : " << y::a << endl;

    //方法
    x::greet();
    y::greet();
    return 0;
}
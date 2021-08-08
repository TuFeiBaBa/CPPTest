// CPPTest.cpp: 定义应用程序的入口点。
//

#include "CPPTest.h"

using namespace std;

int main()
{
    char* TARGET_MODULES[] = {
        "libopenjdkjvm.so",
        "libjavacore.so",
        "libopenjdk.so"
    };
    size_t TARGET_MODULE_COUNT = sizeof(TARGET_MODULES) / sizeof(char*);
	cout << "Hello CMake." << endl;

    int n = 0;
    int* pint = &n;
    int num = 6;
    //pint += 6;
    *pint += num;
    *pint += num;
    cout << pint << endl;
    pint += num;
    cout << pint << endl;

    char buf[100] = "abcdefghijk";
    memcpy(buf + 2, buf, 5);
    printf("%s\n", buf);
	return 0;
}

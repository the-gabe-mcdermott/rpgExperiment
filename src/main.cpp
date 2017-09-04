#include <iostream>

#include "TestSuite.h"


using std::cout;
using std::endl;

int main()
{
    cout << "Hello" << endl;

    TestSuite testSuite;
    testSuite.RunAllTests();
    
    return 0;
}

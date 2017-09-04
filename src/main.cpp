#include <iostream>

#include "TestSuite.h"


using std::cout;
using std::endl;

int main()
{
    cout << " ello there!" << endl;
    
    TestSuite testSuite;
    testSuite.RunAllTests();
    
    return 0;
}

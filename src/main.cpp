#include <iostream>

#include "TestSuite.h"

#include "osResources/BasicConsole.h"
#include "GameEngine/GameEngine.h"


using std::cout;
using std::endl;

int main()
{
    cout << "Hello" << endl;

    TestSuite testSuite;
    
    if (testSuite.RunAllTests() == false)
        return 1;
    
    BasicConsole console;
    GameEngine gameInstance;
    
    gameInstance.Start();    

    return 0;
}

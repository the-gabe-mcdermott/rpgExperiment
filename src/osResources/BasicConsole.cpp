#include <iostream>

#include "BasicConsole.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

BasicConsole::BasicConsole()
{
    isOpen = false;
}

BasicConsole::~BasicConsole()
{
    isOpen = false;
}

bool BasicConsole::Open()
{
    isOpen = true;
    return true;
}


bool BasicConsole::Close()
{
    isOpen = false;
    return true;
}

bool BasicConsole::ReadLine(string &readBuff)
{
    return true;
}

bool BasicConsole::Write(string writeBuff)
{
    return true;
}
bool BasicConsole::WriteLine(string writeBuff)
{
    return true;
}

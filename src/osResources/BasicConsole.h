#include <string>
#include "ConsoleInterface.h"
using std::string;

class BasicConsole: public ConsoleInterface
{
    public:
        BasicConsole();
        virtual ~BasicConsole();
        virtual bool Open();
        virtual bool Close();
        virtual bool ReadLine(string &readBuff);
        virtual bool Write(string writeBuff);
        virtual bool WriteLine(string writeBuff);
    private:
        bool isOpen;
};

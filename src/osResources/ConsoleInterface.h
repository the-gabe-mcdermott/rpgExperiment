#include <string>
using std::string;

class ConsoleInterface
{
public:
    virtual bool Open() = 0;
    virtual bool Close() = 0;
    virtual bool ReadLine(string &readBuff) = 0;
    virtual bool Write(string writeBuff) = 0;
    virtual bool WriteLine(string writeBuff) = 0;
};

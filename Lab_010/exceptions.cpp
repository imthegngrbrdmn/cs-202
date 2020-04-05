#include <iostream>

class Thing
{
public:
    Thing()
    {
        "Thing is created\n";
    }
    ~Thing()
    {
        "Thing is destroyed\n";
    }

private:

};

void functionC()
{
    throw std::runtime_error("functionC() threw std::runtime error");
}

void functionB()
{
    Thing t;
    std::cout << "Starting functionB()\n";
    functionC();
    std::cout << "Ending functionB()\n";
}

void functionA()
{
    try 
    {
        functionB();
        std::cout << "HELP! SOMETHING IS WRONG!\nYOU READ ME!!\n";
    }
    catch (const std::exception& e)
    {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    std::cout << "You should be reading me.\n";
}

int main()
{
    std::cout << "Starting main()" << std::endl;
    functionA();
    std::cout << "Ended normally." << std::endl;
    return 0;
}
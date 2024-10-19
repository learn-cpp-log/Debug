#include <iostream>
// code copied from LearnCpp.com to run with a debugger and find an issue
// it said its Extra credit I fell like Hermione
int readNumber()
{
    std::cout << "Please enter a number: ";
    char x{};
    std::cin >> x;

    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x + y);

    return 0;
}
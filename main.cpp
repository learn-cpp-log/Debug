#include <iostream>
// Solution

int readNumber()
{
    std::cout << "Please enter a number: ";
    //the variable was initiated as char rather than int
    int x{};
    std::cin >> x;

    //that caused the value to change when returned to an int variable
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
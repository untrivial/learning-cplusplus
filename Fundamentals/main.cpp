#include <iostream>

int main()
{
    std::cout << "Hello world!\n";          // std::cout = "character output"     << = "insertion operator"

    // 6 ways to initialize
    int a;          // no initializer (default initialization)                 INDETERMINATE VALUE
    int b = 5;      // initializer after equals sign (copy initialization)
    int c( 6 );     // initializer in paranthesis (direct initialization)
    int d { 7 };    // initializer in braces (direct list initialization)      PREFERRED, SPECIFIC values
    int e = { 8 };  // initializer in braces after equals sign (copy list initialization)
    double f {};    // initializer is empty braces (value initialization)      PREFERRED, ZERO Initialization

    [[maybe_unused]] int g { 5 };           // [[maybe_unused]] = compiler warning suppression

    // Concatenation
    std::cout << "asdf" << " and a variable: " << f << std::endl;       // endl moves cursor to next line & flushes buffer
    std::cout << "orz" << "\n";             // \n is preferred over std::endl. It doesn't flush.

    // Character input
    std::cout << "Enter two numbers separated by space: ";              // don't need \n since user presses enter
    int x_input{ };
    int y_input{ };
    std::cin >> x_input >> y_input;         // >> = extraction operator. This only works in terminal. Debug returns error.
    std::cout << "You entered: " << x_input << " and " << y_input << "\n";

    std::cout << sizeof(int) << "\n";       // sizeof() returns size of type in bytes. 4 for this compiler

    return 0;                               // returning 0 = everything is ok
}

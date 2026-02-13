#include <iostream>
#include <vector>
#include <string>

#include "fic2.hpp"
#include "testc.h"

using namespace std;

int main()
{
    int res = f2(42); // Call the function from fic2.hpp
    cout << "Result from f2: " << res << endl;

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int result_c;
    result_c = result(10, 20); // Call the function from testc.h
    cout << "Result from C function: " << result_c << endl;

    return 0;

}

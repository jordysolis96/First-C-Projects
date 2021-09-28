#include <iostream>
#include <string>

using namespace std;

void name(string name)
{
    cout << "What is your name" << endl;
    getline(cin, name);
    cout << "Hello " + name + "wlecome to my first c++ app!" << endl;
}

int main()
{
    cout << "Hello world!" << endl;
    name("bill");
}

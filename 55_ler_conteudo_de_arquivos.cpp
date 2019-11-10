#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream input("text/texto.txt");

    string texto;
    for(string line; getline(input, line);) {

        texto += line;
    }

    cout << texto << "\n\n";

    return 0;
}
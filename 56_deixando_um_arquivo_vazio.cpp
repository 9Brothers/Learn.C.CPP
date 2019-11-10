#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream file("text/clean.txt");

    file << "";

    file.close();

    return 0;
}
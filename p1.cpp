//Writing to a text file test.txt using C++ FileStream Programming.
//220130318038
//Bhavy Bhuva
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("test.txt");
    file << "Hello" << endl;
    file << "Wel-come to Dr.Subhash University." << endl;
    file.close();
    cout << "Data has been written to the file." << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    system("curl https://api.ipify.org");
    cout << (" <-- This Is Your IP ");
    return 0;
}

#include <iostream>
using namespace std;
void square(int a)
{
    for(int a = 0; a < a+1; a+=a) return a;
}
int main() {
    int b = 2;
    cout << square(2);
}

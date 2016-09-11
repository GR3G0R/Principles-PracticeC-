#include <iostream> 
using namespace std;
int main() {
  double x{2.7};
  int y{x};
  char c{1000};
  int i2{c};
  cout << "x is: " << x << "y is: " << y << "c is: "
    << c << "i2 is: " << i2 <<  endl;
}

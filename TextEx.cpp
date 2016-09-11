#include  <iostream>
using namespace std;

int main()
{
  int number_of_words = 0;
  string previous = " ";
  string current;
  while (cin >> current) {
        ++number_of_words;      //increase word count
        if (previous == current)
            cout << "Repeated word: " << current << '\n';
  previous = current;
            cout << number_of_words;
  }
}

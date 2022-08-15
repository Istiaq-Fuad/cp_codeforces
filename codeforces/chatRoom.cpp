#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i = 0;
  string hello = "hello";
  char input;

  while ((cin >> input) && cin.peek() != '\n')
  {
    if (input == hello[i])
      i++;
  }

  if (i == 5)
    cout << "YES";
  else
    cout << "NO";
}


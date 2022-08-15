#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input, hello = "hello";
  getline(cin, input);

  int x = 0;
  for (int i = 0; i < input.length(); i++)
  {
    if (input[i] == hello[x])
    {
      x++;
      if (x == 5)
        break;
    }
  }

  if (x == 5)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
}
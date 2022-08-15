#include <iostream>
#include <vector>

int main()
{
  int n, o;
  std::cin >> n;

  std::vector<int> a;
  for (int i = 0; i < n; i++)
  {
    std::cin >> o;
    a.push_back(o);
  }

  int k = 0;
  for (int i = 1; i < (n - 1); i++)
  {
    if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1)
    {
      k++;
      a[i + 1] = 0;
    }
  }

  std::cout << k << std::endl;
}
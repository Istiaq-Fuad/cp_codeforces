#include <iostream>
#include <cmath>

int main()
{
  long long testCases, x, y, a, b;
  long long count = 0;
  std::cin >> testCases;

  while (testCases--)
  {
    std::cin >> x >> y >> a >> b;

    count = a * std::abs(x - y) + ((2 * a < b) ? 2 * a * std::min(x, y) : b * std::min(x, y));

    std::cout << count << std::endl;
  }
}

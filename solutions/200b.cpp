#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  double total;
  double count(n);

  while (n--) {
    int juice;
    std::cin >> juice;
    total += juice;
  }

  std::cout << total / count;

  return 0;
}

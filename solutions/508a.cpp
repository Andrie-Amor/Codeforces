#include <algorithm>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  int longest = 1;
  int length = 1;
  int prev;
  std::cin >> prev;
  n--;

  while (n--) {
    int curr;
    std::cin >> curr;
    if (curr >= prev) {
      length++;
      longest = std::max(length, longest);
    } else {
      length = 1;
    }
    prev = curr;
  }

  std::cout << longest;

  return 0;
}

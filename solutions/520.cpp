#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string str;
  int sz;
  std::cin >> sz;
  std::cin >> str;

  if (sz < 26) {
    std::cout << "NO";
    return 0;
  }

  std::vector<int> v(26);

  for (const char c : str) {
    v[tolower(c) - 'a']++;
  }

  for (int num : v) {
    if (num == 0) {
      std::cout << "NO";
      return 0;
    }
  }

  std::cout << "YES";

  return 0;
}

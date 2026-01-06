#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string str;
  std::cin >> str;

  std::string text = "hello";
  int index = 0;

  for (char c : str) {
    if (c == text[index]) {
      index++;
      if (index >= text.size()) {
        std::cout << "YES";
        return 0;
      }
    }
  }

  std::cout << "NO";

  return 0;
}

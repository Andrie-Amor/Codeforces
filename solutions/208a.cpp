#include <iostream>
#include <string>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string str;
  std::cin >> str;

  const std::string wub = "WUB";
  int i = 0;
  std::string ans{};

  for (int i = 0; i < str.size(); i++) {
    if (str.substr(i, 3) == "WUB") {
      if (i != 0) ans += ' ';
      i += 2;
    } else {
      ans += str[i];
    }
  }

  std::cout << ans;

  return 0;
}

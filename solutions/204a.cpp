#include <cstdlib>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  int five_count = 0;
  int zero_count = 0;

  int num;
  while (n--) {
    std::cin >> num;
    if (num == 5) {
      five_count++;
    } else {
      zero_count++;
    }
  }

  if (zero_count == 0) {
    std::cout << "-1";
    return 0;
  }

  std::string answer("5", (five_count / 9) * 9);
  answer += std::string("0", zero_count);

  std::cout << answer;

  return 0;
}

#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  std::string winner;
  int majority = 0;

  while (n--) {
    if (majority == 0) {
      std::cin >> winner;
      majority++;
      continue;
    }

    std::string goal;
    std::cin >> goal;
    if (goal != winner) {
      majority--;
    } else {
      majority++;
    }
  }

  std::cout << winner;

  return 0;
}

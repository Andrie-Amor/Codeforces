#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int row_1 = -1, row_2 = -1;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int num;
      std::cin >> num;
      if (num == 1) {
        row_1 = i;
        row_2 = j;
        break;
      }
    }
  }

  std::cout << abs(2 - row_1) + abs(2 - row_2);

  return 0;
}

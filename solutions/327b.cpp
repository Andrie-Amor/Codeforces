#include <iostream>
#include <vector>

constexpr int MAX_NUM = 1e7 + 1;

std::vector<bool> sieve() {
  std::vector<bool> sv(MAX_NUM, true);
  sv.reserve(MAX_NUM);

  for (int i = 2; i < 3164; i++) {
    if (sv[i]) {
      for (int j = i + i; j < MAX_NUM; j += i) {
        // false means composite
        sv[j] = false;
      }
    }
  }

  return sv;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int sz;
  std::cin >> sz;

  std::vector<bool> sv = sieve();
  std::vector<int> primes;

  int i = 2;
  while (sz) {
    if (sv[i]) {
      sz--;
      primes.push_back(i);
    }
    i++;
  }

  for (int i = 0; i < primes.size(); i++) {
    std::cout << primes[i];
    if (i != primes.size() - 1) std::cout << " ";
  }

  return 0;
}

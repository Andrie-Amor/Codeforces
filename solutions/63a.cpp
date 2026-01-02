#include <iostream>
#include <string>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string line;

    int n;
    std::cin >> n;

    int x{}, y{}, z{};
    int x_total{}, y_total{}, z_total{};

    while (n--) {
        std::cin >> x >> y >> z;
        x_total += x;
        y_total += y;
        z_total += z;
    }

    if (x_total == 0 && y_total == 0 && z_total == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
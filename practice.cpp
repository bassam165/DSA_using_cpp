#include <iostream>

int main() {
    int m;
    std::cin >> m;
    
    if (m >= 2 && m % 2 == 0) {
        std::cout << "YES\n"; // Tarrak can divide candies evenly
    } else {
        std::cout << "NO\n"; // Tarrak can't divide candies evenly
    }
    
    return 0;
}

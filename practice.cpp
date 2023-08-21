#include <iostream>

int main() {
    int m;
    std::cin >> m;
    
    if (m >= 4 && m % 2 == 0) {
        std::cout << "YES\n"; 
    } else {
        std::cout << "NO\n"; 
    }
    
    return 0;
}

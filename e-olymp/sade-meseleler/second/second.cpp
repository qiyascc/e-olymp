// C++ 17
#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    int count = 0;
    do {
        count++;
        n /= 10;
    } while (n);

    std::cout << count << std::endl;
    return 0;
}

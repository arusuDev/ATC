#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    do {
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << (i == n - 1 ? "\n" : ", ");
        }
    } while (std::next_permutation(arr.begin(), arr.end()));

    return 0;
}

#include <iostream>
#include <limits>

using namespace std;

int main() {
    long long result = 0;
    long long module = 10000000000;
    int amount = 1000;

    for (int i = 1; i <= amount; ++i) {
        long long temp = (long long)(i);
        for (int j = 1; j < i; ++j) {
            temp *= i;
            if (temp >= numeric_limits<long long>::max() / amount)
                temp %= module;
        }

        result += temp;
    }

    result %= module;
    cout << result << endl;

    return 0;
}
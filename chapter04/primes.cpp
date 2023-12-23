#include "../std_lib_facilities.h"


bool isprime(vector<int> primes, int number);

int main() {

    vector<int> primes;
    primes.push_back(2);

    for (int number = 3; number <= 100; ++number) {

        if (isprime(primes, number)) {
            primes.push_back(number);
        }
    }

    for (int i = 0; i < primes.size(); ++i) {
        cout << primes[i] << " ";
    }
    cout << "\n";
    return 0;
}


bool isprime(vector<int> primes, int number) {

    //check if number is in the list of primes
    for (int i = 0; i < primes.size(); ++i) {

        if (number % primes[i] == 0) {
            return false;
        }
    }

    return true;
}
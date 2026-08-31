#include <iostream>
using namespace std;
 
int fibonacci(int n) 
{
	int prev2 = 0, prev1 = 1;
    if (n <= 1)
	 return n;
 
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
 
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}


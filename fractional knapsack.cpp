#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    int weight[100], profit[100];
    double ratio[100];
    cout << "Enter weights:\n";
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    cout << "Enter profits:\n";
    for (int i = 0; i < n; i++)
        cin >> profit[i];
    for (int i = 0; i < n; i++)
        ratio[i] = (double)profit[i] / weight[i];
    cout << "Enter knapsack capacity: ";
    cin >> capacity;
    sort(ratio, ratio + n);
    double maxProfit = 0;
    for (int i = 0; i < n; i++) {
        if (weight[i] <= capacity) {
            capacity = capacity - weight[i];
            maxProfit = maxProfit + profit[i];
        }
        else {
            maxProfit = maxProfit +
                        ratio[i] * capacity;
            break;
        }
    }
    cout << "Maximum Profit = " << maxProfit;
    return 0;
}

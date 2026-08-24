#include <iostream>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

int main() {

    Job jobs[] = {
        {'J1', 2, 100},
        {'J2', 1, 19},
        {'J3', 2, 27},
        {'J4', 3, 25},
        {'J5', 3, 15}
    };

    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (jobs[i].profit < jobs[j].profit) {
                Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    int maxDeadline = 0;

    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }
    }

    char slot[maxDeadline + 1];

    for (int i = 0; i <= maxDeadline; i++) {
        slot[i] = '-';
    }

    int totalProfit = 0;

    for (int i = 0; i < n; i++) {

        for (int j = jobs[i].deadline; j >= 1; j--) {

            if (slot[j] == '-') {
                slot[j] = jobs[i].id;
                totalProfit = totalProfit + jobs[i].profit;
                break;
            }
        }
    }

    cout << "Job Sequence: ";

    for (int i = 1; i <= maxDeadline; i++) {
        cout << slot[i] << " ";
    }

    cout << "\nMaximum Profit: " << totalProfit;

    return 0;
}

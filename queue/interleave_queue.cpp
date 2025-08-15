#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int>& q) {
    int n = q.size();
    int half = n / 2;

    queue<int> firstHalf;
    queue<int> secondHalf;

    // Step 1: Store first half in firstHalf
    for (int i = 0; i < half; i++) {
        firstHalf.push(q.front());                    //time == n/2  //space n/2
        q.pop();
    }

    // Step 2: Remaining elements go into secondHalf
    while (!q.empty()) {
        secondHalf.push(q.front());                     // time == (n-n/2) and     space n/2
        q.pop();
    }

    // Step 3: Interleave
    while (!firstHalf.empty() || !secondHalf.empty()) {
        if (!firstHalf.empty()) {
            q.push(firstHalf.front());
            firstHalf.pop();                                          /// o(n)
        }

        if (!secondHalf.empty()) {
            q.push(secondHalf.front());
            secondHalf.pop();
        }
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    interleave(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

/// Thiis code for both even and odd case  

//space complexity is overall  o(n)

// Time complexity overall  is o(n)
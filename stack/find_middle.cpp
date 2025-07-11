#include <iostream>
#include <stack>
using namespace std;

///This approch is using 2 stack first find mid by using size and then insert into temp stack by using loop 

int findMiddle(stack<int> s) {
    int n = s.size();
    int mid = (n / 2);
    stack<int> temp;
    
    // Pop until middle
    for (int i = 0; i < mid; i++) {
        temp.push(s.top());
        s.pop();
    }

    int middle = s.top();

    // Optional: Restore original stack (if needed)
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    return middle;
}


// solve by recursion this approch is used by using recursion


int solve(stack<int> &s, int &pos){
    
    if(pos == 1){
        return s.top();
    }
    
    //Apply recursion
    
    pos--;
    int temp = s.top();
    s.pop();
    
    int ans = solve(s, pos);
    
    s.push(temp);
    return ans;
}

int findMiddle(stack<int> &s){
    int size = s.size();
    if(s.empty()){
        return -1;
    }
    
    int pos = 0;
    if(size%2 == 0){
        pos= size/2;        
    }
    else{
        pos = (size/2)+1;
    }
    
   int ans = solve(s, pos);
   return ans;
}


int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);// Stack = [10, 20, 30, 40, 50] -> Top is 50

    cout << "Middle element: " << findMiddle(s) << endl;
    return 0;
}

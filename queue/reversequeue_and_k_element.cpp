// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

 void reverseQueue(queue<int> &q){
     stack<int> s;
     
     while(!q.empty()){
         int qelement = q.front();   //(1)
         q.pop();                    //o(1)    so all operation n time total o(n)
         s.push(qelement);           //o(1)
     }
     
     while(!s.empty()){
         int selement = s.top();
         s.pop();
         q.push(selement);                   // similar fot thiscomplexity 0(n)
     }
     
 }                                       /// total o(n) + o(n)  == o(n)
                                         // total space == extra stack space used n elements so o(n)
 
 // reverse by stack 
 
 void reverseByRecursion(queue<int> &q){
     if(q.empty()){
         return;
     }
     
     int temp = q.front();            
     q.pop();
    reverseByRecursion(q); // if we are not used p[ass by refernce the temp will push local copy not original
    q.push(temp);          // toall no. of call n == o(n)
 }                         // no extra space used but rcurion run on call stack 
                       // depth of recursion = n
                      // space complecity = o(n ) (dur to recusion stack)

 

 void kreverse(queue<int> &q, int k){
    stack<int> s;
    int n = q.size();

    if(k>n || k==0){
    	return;
    }

    for(int i =0; i< k; i++){
        int temp = q.front();   // o(k)
        q.pop();
        s.push(temp);             
    }
    
    while(!s.empty()){
        int temp = s.top();    // o(k)
        s.pop();
        q.push(temp);
    }
    
    for(int i=0; i< n-k; i++){    // o(n-k)
        int temp  = q.front();
        q.pop();
        q.push(temp);
    }                             //total time = o(n)  
 }                                 // space == stack hold k elements ==> 0(k)
  


// This is brute force solution by using vector 
  void kreverseBrute(queue<int>& q, int k) {
    int n = q.size();
    if (k > n || k == 0) return;

    vector<int> temp;

    // Step 1: Push all elements to vector (inefficient)
    while (!q.empty()) {
        temp.push_back(q.front());
        q.pop();
    }

    // Step 2: Reverse first k elements in vector
    reverse(temp.begin(), temp.begin() + k);

    // Step 3: Push back all to queue
    for (int val : temp) {
        q.push(val);
    }
 

// IN brute force we are using vector extra space but we push all elemnt of queue in vectore that is more memory uised o(n) memory used but by using stack we are using o(k)

  // so space complecity == o(n)  worst of o(k)
    // time complexity  ====== o(n)



int main() {
    // Write C++ code here
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    int k =4;
    
    // reverseQueue(q);
    kreverse(q, k);
    
    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout<< "element in queue"<< element<<endl;
    }
    return 0;
    
}

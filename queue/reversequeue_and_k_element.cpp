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
 
 // reverse by stack 
 
 void reverseByRecursion(queue<int> q){
     if(q.empty()){
         return;
     }
     
     int temp = q.front();
     q.pop();
    reverseByRecursion(q);
    q.push(temp);
 }
 
 void kreverse(queue<int> &q, int k){
    stack<int> s;
    int n = q.size();

    if(k>n || k==0){
    	return;
    }

    for(int i =0; i< k; i++){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    
    for(int i=0; i< n-k; i++){
        int temp  = q.front();
        q.pop();
        q.push(temp);
    }
 }
 
 

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

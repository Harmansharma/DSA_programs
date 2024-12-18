#include <iostream>
#include <stack>
using namespace std;

int main() {
// creation the stack
    stack<int> st;
//  insertion the element    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);
    st.push(60);
// print the size of stack
    cout<< "size of stack "<< st.size()<< endl;
// print the top of the stack
    cout<< "Top of the stack "<< st.top()<<endl;
 // remove the element
    st.pop();
    cout<<"After removing the element"<<endl;
    cout<< "size of stack "<< st.size()<< endl;
    cout<< "New top  of stack"<< st.top()<<endl;
    
    /// check the stack is empty or not
    
    if(st.empty()){
        cout<< "stack is empty"<< endl;
    }
    else
    {
        cout<< "stack is not empty"<< endl;
        cout<<endl;
    }
    
    /// swap in stack
    
    stack<int> another_stack;
    another_stack.push(500);
    another_stack.push(600);
    cout<<"another stack size " << another_stack.size()<<endl;
    cout<<"another stack size " << another_stack.top()<<endl;
    
    cout<< endl;
  //// another stack after stack
    st.swap(another_stack);
    cout<<"after swap aother stack size " << another_stack.size()<<endl;
    cout<<" after swap another stack size " << another_stack.top()<<endl;
    cout << endl;
   
   /// st stack after swap  
    cout<<"after swap stack size " << st.size()<<endl;
    cout<<"after swap  stack size " << st.top()<<endl;
    return 0;
}
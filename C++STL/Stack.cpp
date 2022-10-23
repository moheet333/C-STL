#include <bits/stdc++.h>

using namespace std;

void explainStack() {
    stack<int> st;
    st.push(1);  // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}
     
    cout<< st.top(); // prints 5 "** st[2] is invalid**"
    
    st.pop(); // st looke like {3,3,2,1}
    
    cout << st.top(); // 3 
    
    cout << st.size(); // 4 
    cout << st.empty(); // false 
    
    stack<int> s1,s2;
    s1.swap(s2);
   
}
 
int main()
{
    explainStack();

    return 0;
}


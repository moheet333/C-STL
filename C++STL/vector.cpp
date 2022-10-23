#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    // emplace_back faster than push_back but both do same job
    cout<<v[0]<<" "<<v[1]<<endl;
    
    vector<pair<int , int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    // emplace_back recognizes that vec is a pair vector.
    cout<<vec[0].first<<" "<<vec[1].first<<endl;
    
    vector<int> v2(5);
    vector<int> v3(5,100);
    vector<int> v4(v3);
    // v2- 5 empty or garbage value spaced vector 
    // v3- 5 spaced vector each having 100 int value
    // v4- copy v3 exact.
    cout<<v2[0]<<endl;
    cout<<v3[0]<<" "<<v3[1]<<endl;
    cout<<v4[0]<<" "<<v4[1]<<endl;
}

void iterateVector() {
    vector<int> v = {20,10,30,50,40};
    vector<int>::iterator it = v.begin();
    // iterator will iterate through vector by storing locations of values
    // .begin() will asign iterator with the location of first value.
    cout<<*(it)<<endl;
    // here * because it is the location and * gets value
    it++;
    cout<<*(it)<<endl;
    
    it = it + 2;
    // + 2 will make the iterator go 2 positions ahead
    cout<<*(it)<<endl;
    
    vector<int>::iterator it2 = v.end();
    // .end() will make iterator point after the last element in vector
    // Therefore -- is done
    it2--;
    cout<<*(it2)<<endl;
    
    vector<int>::reverse_iterator it3 = v.rbegin();
    vector<int>::reverse_iterator it4 = v.rend();
    // These are more operations but NOT commonly used
    // Basically to reverse the process
    
    cout<<v.back()<<endl;
    // back() will give lsat element
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    // for loop to iterate over the vector
    cout<<endl;
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    // auto will define datatype according to data assigned
    cout<<endl;
    for(auto it : v) {
        cout<<it<<" ";
    }
    // this it iteration using for Each elements of vector
}

void modifyVector() {
    vector<int> v = {10, 12, 30, 20, 5};
    
    // Erase Function
    
    //v.earse(v.begin() + 1);
    // erase can take location as input and erase it and reshuffle vector ans={10,30,20,5}
    //v.erase(v.begin()+2, v.begin()+4);
    // erase from start i.e 30 till before end i.e before 5 ,from initial vector ans={10,12,5}
    
    // Insert Function
    
    vector<int> v1(2,100); //{100,100}
    v1.insert(v1.begin(), 300); // {300, 100, 100}
    v1.insert(v.begin()+1,2,10); // {300, 10, 10, 100, 100}
    cout<<v1[0]<<endl;
    
    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}
    
    // Other Vector functions
    cout<< v.size(); // gives the number of elements present in Vector
    
    // EG {10, 20}
    v.pop_back(); //{10}
    
    //v1={10,20}
    //v2={30,40}
    v1.swap(v); // v1={30,40} v2={10,20}
    
    v.clear(); // empty the vector
    
    cout<<v.empty(); // true if vector empty and false if not empty
    
}

int main()
{
    explainVector();
    iterateVector();
    modifyVector();
    return 0;
}


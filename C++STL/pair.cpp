#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {2,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , pair<int, int>> d = {2,{3,5}};
    cout<<d.first<<" "<<d.second.second<<" "<<d.second.first<<endl;
    pair<int, int> arr[] = {{7,4},{3,6},{2,4}};
    cout<<arr[0].first;
    return 0;
}

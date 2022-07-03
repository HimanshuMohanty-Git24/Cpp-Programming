#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    //erase a certain position
    int in;
    cin>>in;
    auto it = v.begin()+(in-1);
    v.erase(it);

    //erase in a range
    int a,b;
    cin>>a>>b;
    auto itr1 = v.begin()+(a-1);
    auto itr2= v.begin()+(b-1);
    v.erase(itr1,itr2);

    cout<<v.size()<<endl;
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    return 0;
}

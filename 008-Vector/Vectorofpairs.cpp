//vectors of pairs

#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<pair<int ,int>> vp;

   vp.push_back({1,2});
   vp.push_back(make_pair(3,4));

   for(auto p:vp)
   {
    cout << p.first << " " << p.second << "\n";
   }

   return 0;

}
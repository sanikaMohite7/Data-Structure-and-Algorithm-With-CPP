//Check Duplicates

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main()
{
   vector<int> arr = {1, 2, 3, 4, 5, 2};
   
   unordered_set<int> s;

   bool duplicate = false;

   for(int x: arr)
   {
    if(s.count(x))
    {
        duplicate = true;
        break;
    }
    s.insert(x);
   }

   if(duplicate)
   {
    cout << "Duplicate found" << endl;
   }
   else
   {
    cout << "Duplicate not found" << endl;
   }
   return 0;
   
}
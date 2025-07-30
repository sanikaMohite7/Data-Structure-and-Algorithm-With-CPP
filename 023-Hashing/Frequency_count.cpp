//Frequency Count

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};
    unordered_map<int ,int> freq;

    for(int x :arr)
    {
        freq[x]++;
    }

    cout << "Frequency of elements: " << endl;

    for(auto pair :freq)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;

}
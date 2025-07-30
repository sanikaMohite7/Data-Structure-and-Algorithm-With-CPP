//Array in STL

#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
    array<int ,5> arr = {1,2,3,4,5};

    sort(arr.begin() ,arr.end());
    reverse(arr.begin() ,arr.end());

    cout << "Array Elements:\n";
    for(int x:arr)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "Size:" << arr.size();
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[arr.size()-1] << endl;
    cout << "Is array empty? " <<(arr.empty() ? "Yes": "No") << endl;
    cout << "Max Element: " << *max_element(arr.begin() ,arr.end()) << endl;
    cout << "Min Element: " << *min_element(arr.begin() ,arr.end()) << endl;
    cout << "Sum of elements:" << accumulate(arr.begin() ,arr.end() ,0) << endl;
    cout << "Product of elements:" << accumulate(arr.begin() ,arr.end() ,1 ,multiplies<int>()) << endl;
    
}
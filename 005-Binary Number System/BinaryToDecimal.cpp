//Binary to Decimal Conversion

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int BinaryToDecimal(string binary)
{
    int decimal = 0;
    int length = binary.length();

    for(int i = 0 ; i< length ; i++)
    {
        if(binary[length - 1 - i] == '1')
        {
            decimal += pow(2 , i);
        }
    }
    return decimal;
}
int main()
{
    string binary = "1010";
    cout << "Binary to decimal of " << binary << " = " << BinaryToDecimal(binary) << endl;
}